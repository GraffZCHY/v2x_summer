# Traffic sign inference node
# This node gets data from upstream topic 'det2d_img_bbox_label', picks the
# traffic sign related data, and performs inference on the data.
# Then the inferenced result is published to the topic 'ts_res'
# For visualization, the first traffic sign image in ts_regions is
# also published to the topic 'ts_img'
import os
import time
import logging
import cv2
import numpy as np
from math import ceil,floor
from yaml import Loader
from PIL import Image as PIL_Image

import rclpy # Python Client Library for ROS 2
from rclpy.node import Node # Handles the creation of nodes

from sensor_msgs.msg import Image, PointCloud2, PointField
from std_msgs.msg import Header, Float32MultiArray, Int16MultiArray
from cv_bridge import CvBridge

import message_filters
from message_filters import ApproximateTimeSynchronizer, Subscriber,TimeSynchronizer
from detectron2.config import CfgNode as CN

from config.config import get_config
from perception_comm.msg import CAN
from perception_system.structure.message import Message
from perception_system.build import build_model
from threading import Thread, Lock


DUMMY_FIELD_PREFIX = '__'

# mappings between PointField types and numpy types
type_mappings = [(PointField.INT8, np.dtype('int8')),
				 (PointField.UINT8, np.dtype('uint8')),
				 (PointField.INT16, np.dtype('int16')),
				 (PointField.UINT16, np.dtype('uint16')),
				 (PointField.INT32, np.dtype('int32')),
				 (PointField.UINT32, np.dtype('uint32')),
				 (PointField.FLOAT32, np.dtype('float32')),
				 (PointField.FLOAT64, np.dtype('float64'))]
pftype_to_nptype = dict(type_mappings)
nptype_to_pftype = dict((nptype, pftype) for pftype, nptype in type_mappings)

_to_numpy = {}
_from_numpy = {}


def converts_to_numpy(msgtype, plural=False):
	def decorator(f):
		_to_numpy[msgtype, plural] = f
		return f
	return decorator

def converts_from_numpy(msgtype, plural=False):
	def decorator(f):
		_from_numpy[msgtype, plural] = f
		return f
	return decorator

def numpify(msg, *args, **kwargs):
	if msg is None:
		return

	conv = _to_numpy.get((msg.__class__, False))
	if not conv and isinstance(msg, Sequence):
		if not msg:
			raise ValueError("Cannot determine the type of an empty Collection")
		conv = _to_numpy.get((msg[0].__class__, True))


	if not conv:
		raise ValueError(
			"Unable to convert message {} - only supports {}".format(
			msg.__class__.__name__,
			', '.join(cls.__name__ + ("[]" if pl else '')
						  for cls, pl in _to_numpy.keys())
		))

	return conv(msg, *args, **kwargs)

def msgify(msg_type, numpy_obj, *args, **kwargs):
	conv = _from_numpy.get((msg_type, kwargs.pop('plural', False)))
	if not conv:
		raise ValueError("Unable to build message {} - only supports {}".format(
			msg_type.__name__,
			', '.join(cls.__name__ + ("[]" if pl else '')
						  for cls, pl in _to_numpy.keys())
		))
	return conv(numpy_obj, *args, **kwargs)

@converts_to_numpy(PointField, plural=True)
def fields_to_dtype(fields, point_step):
	'''Convert a list of PointFields to a numpy record datatype.
	'''
	offset = 0
	np_dtype_list = []
	for f in fields:
		while offset < f.offset:
			# might be extra padding between fields
			np_dtype_list.append(
				('%s%d' % (DUMMY_FIELD_PREFIX, offset), np.uint8))
			offset += 1

		dtype = pftype_to_nptype[f.datatype]
		if f.count != 1:
			dtype = np.dtype((dtype, f.count))

		np_dtype_list.append((f.name, dtype))
		offset += pftype_to_nptype[f.datatype].itemsize * f.count

	# might be extra padding between points
	while offset < point_step:
		np_dtype_list.append(('%s%d' % (DUMMY_FIELD_PREFIX, offset), np.uint8))
		offset += 1

	return np_dtype_list


@converts_from_numpy(PointField, plural=True)
def dtype_to_fields(dtype):
	'''Convert a numpy record datatype into a list of PointFields.
	'''
	fields = []
	for field_name in dtype.names:
		np_field_type, field_offset = dtype.fields[field_name]
		pf = PointField()
		pf.name = field_name
		if np_field_type.subdtype:
			item_dtype, shape = np_field_type.subdtype
			pf.count = int(np.prod(shape))
			np_field_type = item_dtype
		else:
			pf.count = 1

		pf.datatype = nptype_to_pftype[np_field_type]
		pf.offset = field_offset
		fields.append(pf)
	return fields

@converts_to_numpy(PointCloud2)
def pointcloud2_to_array(cloud_msg, squeeze=True):
	''' Converts a rospy PointCloud2 message to a numpy recordarray

	Reshapes the returned array to have shape (height, width), even if the
	height is 1.

	The reason for using np.frombuffer rather than struct.unpack is
	speed... especially for large point clouds, this will be <much> faster.
	'''
	# construct a numpy record type equivalent to the point type of this cloud
	dtype_list = fields_to_dtype(cloud_msg.fields, cloud_msg.point_step)

	# parse the cloud into an array
	cloud_arr = np.frombuffer(cloud_msg.data, dtype_list)

	# remove the dummy fields that were added
	cloud_arr = cloud_arr[
		[fname for fname, _type in dtype_list if not (
			fname[:len(DUMMY_FIELD_PREFIX)] == DUMMY_FIELD_PREFIX)]]

	if squeeze and cloud_msg.height == 1:
		return np.reshape(cloud_arr, (cloud_msg.width,))
	else:
		return np.reshape(cloud_arr, (cloud_msg.height, cloud_msg.width))

def get_xyz_points(cloud_array, remove_nans=True, dtype=np.float):
	'''Pulls out x, y, and z columns from the cloud recordarray, and returns
	a 3xN matrix.
	'''
	# remove crap points
	if remove_nans:
		mask = np.isfinite(cloud_array['x']) & \
			   np.isfinite(cloud_array['y']) & \
			   np.isfinite(cloud_array['z']) & \
			   np.isfinite(cloud_array['intensity'])
			
		cloud_array = cloud_array[mask]

	# pull out x, y, and z values
	points = np.zeros(cloud_array.shape + (4,), dtype=dtype)
	points[...,0] = cloud_array['x']
	points[...,1] = cloud_array['y']
	points[...,2] = cloud_array['z']
	points[...,3] = cloud_array['intensity']
	# time_us = cloud_array['timestamp_us'][-1]
	# time_s = cloud_array['timestamp_s'][-1]
	# print("timestamp_us: ",str(time_s)+'.'+str(time_us))
	return points

def pointcloud2_to_xyz_array(cloud_msg, remove_nans=True):
	return get_xyz_points(
		pointcloud2_to_array(cloud_msg), remove_nans=remove_nans)


class FusionNode(Node):
	"""
	ROS Node for running traffic sign classification on detected traffic sign regions
	"""

	def __init__(self):
		super().__init__('fusion_node')
		self.logger = self.get_logger()
		self.logger.info('fusion_node started')
		self.det2d_sub = message_filters.Subscriber(self, CAN, 'det2d')
		
		self.img_msg = message_filters.Subscriber(self, Image, '/blackfly_0/image_raw')
		self.pcd_msg = message_filters.Subscriber(self, PointCloud2, 'cepton_pcl2')

		self.ts_msg = message_filters.Subscriber(self, CAN, 'det_ts')
		self.tl_msg = message_filters.Subscriber(self, CAN, 'det_tl')

		self.publisher_ = self.create_publisher(CAN, 'fusion_results', 10)
		self.cfg = get_config("pipelinev4.0.yaml")
		self.fusion_model = build_model(self.cfg,"FUSION")
		self.time_st = time.time()
		self.th_flag = False
		self.br = CvBridge()
		queue_size = 10
		ts_tolerance = 1
		ats = ApproximateTimeSynchronizer([self.img_msg,self.pcd_msg,self.det2d_sub,self.ts_msg,self.tl_msg], queue_size,ts_tolerance)
		ats.registerCallback(self.listener_callback)

		


	def listener_callback(self,img_msg,pcd_msg, det2d_msg,ts_msg,tl_msg):
		"""
		Runs the traffic sign classification on the detected traffic sign regions

		Args:
			imgbbxlbl_msg (ImgBbxLbl): Image message from the topic 'det2d_img_bbox_label'

		Subscribes:
			/det2d_img_bbox_label (ImgBbxLbl): Image message from the topic 'det2d_img_bbox_label'

		Publishes:
			/ts_res (StrArr): String array message containing the traffic sign classification results
			/ts_img (Image): Image message containing the first traffic sign image in ts_regions
		"""

		callback_start = time.time()
		observe_time = int(time.time()-self.time_st)
		# grab data from the data source (topic 'det2d_img_bbox_label' in this case)
		self.logger.debug('-'*20)

		#Convert pcd and img msg to np array
		points = pointcloud2_to_xyz_array(pcd_msg)
		self.logger.info(f'pointcloud2_to_xyz time: {time.time() - callback_start:.5f}s')
		rotated_npy = np.array([points[:,1], -points[:,0], points[:,2],points[:,3]]).T


		#decode ros msg to Message class and get teh value of ts_counts

		det_merger_2d_ts_tl = Message.from_ros(det2d_msg)

		tl_result = Message.from_ros(tl_msg)
		ts_result = Message.from_ros(ts_msg)

        # # Merge traffic sign and traffic sign info to Lane

		if "TrafficSignalHeads_TrackA" in tl_result.get_avail_keys():
			det_merger_2d_ts_tl.TrafficSignalHead_TrackA = tl_result.TrafficSignalHead_TrackA
		if "TrafficSign_TrackA" in ts_result.get_avail_keys():
			det_merger_2d_ts_tl.TrafficSign_TrackA = ts_result.TrafficSign_TrackA



		frame_cv2 = self.br.imgmsg_to_cv2(img_msg)
		frame = cv2.cvtColor(frame_cv2,cv2.COLOR_BayerBG2BGR)
		self.img_show_th1 = cv2.cvtColor(frame_cv2,cv2.COLOR_BayerBG2BGR)

		input = [frame,rotated_npy]




		self.det2d_merge_msg = self.fusion_model(input,det_merger_2d_ts_tl)

		self.det2d_merge_msg.add_new_key(Objects=[], TrafficSignalHeads=[], TrafficSigns=[], LaneMarkings=[],  LimitLines=[], )



		# Update Objects msg
		self.det2d_merge_msg.Objects.Observation_Time_of_Hour = observe_time
		if "Object_TrackA" in self.det2d_merge_msg.get_avail_keys():
			self.det2d_merge_msg.Objects.Current_Object_Count = float(len(self.det2d_merge_msg.Object_TrackA))
		#============================================================================	

		#============================================================================
		# Update TrafficSignalHeads msg
		self.det2d_merge_msg.TrafficSignalHeads.Observation_Time_of_Hour = observe_time
		if "TrafficSignalHead_TrackA" in self.det2d_merge_msg.get_avail_keys():
			self.det2d_merge_msg.TrafficSignalHeads.Current_Signal_Head_Count = float(len(self.det2d_merge_msg.TrafficSignalHead_TrackA))
		#============================================================================	

		#============================================================================
		# Update TrafficSigns msg
		self.det2d_merge_msg.TrafficSigns.Observation_Time_of_Hour = observe_time
		if "TrafficSign_TrackA" in self.det2d_merge_msg.get_avail_keys():
			self.det2d_merge_msg.TrafficSigns.Current_Sign_Count = float(len(self.det2d_merge_msg.TrafficSign_TrackA))
		#============================================================================	

		#============================================================================
		# Update LaneMarkings msg
		self.det2d_merge_msg.LaneMarkings.Observation_Time_of_Hour = observe_time
		if "LaneMarking_TrackA" in self.det2d_merge_msg.get_avail_keys():
			self.det2d_merge_msg.LaneMarkings.CurrentLaneMarkingCount = float(len(self.det2d_merge_msg.LaneMarking_TrackA))
		#============================================================================	

		#============================================================================
		# Update LimitLines msg
		self.det2d_merge_msg.LimitLines.Observation_Time_of_Hour = observe_time
		if "LimitLine_TrackA" in self.det2d_merge_msg.get_avail_keys():
			self.det2d_merge_msg.LimitLines.Current_Limit_Line_Count = float(len(self.det2d_merge_msg.LimitLine_TrackA))
		#============================================================================












		msg_fusion_ros = CAN()

		
		


		self.det2d_merge_msg.to_ros(msg_fusion_ros)
		msg_fusion_ros.header = pcd_msg.header

		self.publisher_.publish(msg_fusion_ros)

		callback_end = time.time()
		self.logger.info(f'Callback time: {callback_end - callback_start:.5f}s')

		self.draw_msg()
		cv2.imshow("img",self.img_show_th1)
		cv2.waitKey(1)



		# if self.th_flag != True:
		# 	self.th_flag = True
		# 	self.start()
		
	def start(self) :
	   
		self.thread = Thread(target=self._update, args=())

		self.thread.start()

	def draw_msg(self):
		if 'Object_TrackA' in self.det2d_merge_msg.get_avail_keys():
			for objA in self.det2d_merge_msg.Object_TrackA:
				bbox_xmin = int(objA.bbox_xmin)
				bbox_ymin = int(objA.bbox_ymin)
				bbox_xmax = int(objA.bbox_xmax)
				bbox_ymax = int(objA.bbox_ymax)
				self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (255,0,0), 2)

				x_center = int(objA.bbox3d_x)
				y_center = int(objA.bbox3d_y)
				z_center = int(objA.bbox3d_z)

				label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
				self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
							cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
					
		if 'TrafficSign_TrackA' in self.det2d_merge_msg.get_avail_keys():
			for tsA in self.det2d_merge_msg.TrafficSign_TrackA:
				bbox_xmin = int(tsA.bbox_xmin)
				bbox_ymin = int(tsA.bbox_ymin)
				bbox_xmax = int(tsA.bbox_xmax)
				bbox_ymax = int(tsA.bbox_ymax)

				self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (0,255,0), 2)
				x_center = int(objA.bbox3d_x)
				y_center = int(objA.bbox3d_y)
				z_center = int(objA.bbox3d_z)

				label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
				self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
							cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
				
		if 'TrafficSignalHead_TrackA' in self.det2d_merge_msg.get_avail_keys():
			for tsA in self.det2d_merge_msg.TrafficSignalHead_TrackA:
				bbox_xmin = int(tsA.bbox_xmin)
				bbox_ymin = int(tsA.bbox_ymin)
				bbox_xmax = int(tsA.bbox_xmax)
				bbox_ymax = int(tsA.bbox_ymax)

				self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (0,0,255), 2)

				x_center = int(objA.bbox3d_x)
				y_center = int(objA.bbox3d_y)
				z_center = int(objA.bbox3d_z)

				label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
				self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
							cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
				
	def _update(self) :
		cv2.namedWindow("fusion", cv2.WINDOW_NORMAL)	
		while True:
			if 'Object_TrackA' in self.det2d_merge_msg.get_avail_keys():
				for objA in self.det2d_merge_msg.Object_TrackA:
					bbox_xmin = int(objA.bbox_xmin)
					bbox_ymin = int(objA.bbox_ymin)
					bbox_xmax = int(objA.bbox_xmax)
					bbox_ymax = int(objA.bbox_ymax)
					self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (255,0,0), 2)

					x_center = int(objA.bbox3d_x)
					y_center = int(objA.bbox3d_y)
					z_center = int(objA.bbox3d_z)

					label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
					self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
								cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
					
			if 'TrafficSign_TrackA' in self.det2d_merge_msg.get_avail_keys():
				for tsA in self.det2d_merge_msg.TrafficSign_TrackA:
					bbox_xmin = int(tsA.bbox_xmin)
					bbox_ymin = int(tsA.bbox_ymin)
					bbox_xmax = int(tsA.bbox_xmax)
					bbox_ymax = int(tsA.bbox_ymax)

					self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (0,255,0), 2)
					x_center = int(objA.bbox3d_x)
					y_center = int(objA.bbox3d_y)
					z_center = int(objA.bbox3d_z)

					label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
					self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
								cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
					
			if 'TrafficSignalHead_TrackA' in self.det2d_merge_msg.get_avail_keys():
				for tsA in self.det2d_merge_msg.TrafficSignalHead_TrackA:
					bbox_xmin = int(tsA.bbox_xmin)
					bbox_ymin = int(tsA.bbox_ymin)
					bbox_xmax = int(tsA.bbox_xmax)
					bbox_ymax = int(tsA.bbox_ymax)

					self.img_show_th1 = cv2.rectangle(self.img_show_th1, (bbox_xmin,bbox_ymin), (bbox_xmax,bbox_ymax), (0,0,255), 2)

					x_center = int(objA.bbox3d_x)
					y_center = int(objA.bbox3d_y)
					z_center = int(objA.bbox3d_z)

					label = str(x_center) + " "+ str(y_center) + " "+str(z_center)
					self.img_show_th1 = cv2.putText(self.img_show_th1, label, (bbox_xmin, bbox_ymin - 5),
								cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 1)
					
			cv2.imshow("Road Detections", self.img_show_th1)

			key = cv2.waitKey(1)

def main():
	rclpy.init()

	fusion_node = FusionNode()

	rclpy.spin(fusion_node)

	fusion_node.destroy_node()
	rclpy.shutdown()


if __name__ == '__main__':
	main()