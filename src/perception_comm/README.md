# perception_comm
ROS2 communication utilities, mostly custom message definition

# How to create a custom message type
We want to combine the two message types into one: the image, and the point cloud.

1. First we create a new C++ package called `interf` (short for interface) where we define the new message type. Then we modify the original `benchmark_publisher` and `benchmark_subscriber` accordingly. Currenlty only C++ packages can define custom messages. We use:
```
ros2 pkg create --build-type ament_cmake interf
```
2. Then it's a good practice to keep `.msg` files in their own directories within the `interf` package. Create the directories in `ros2_ws/src/interf`:
```
mkdir msg
```
3. In the `msg` directory, create a file called `ImgPcdTm.msg` (short for image, point cloud, and timestamp) with the following content:
```
sensor_msgs/Image img
sensor_msgs/PointCloud2 pcd
std_msgs/Float32 tmstp
```
4. To convert the interfaces you defined into language-specific code (like C++ and Python) so that they can be used in those languages, add the following lines to `CMakeLists.txt` before the line `ament_package()`:
```
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ImgPcdTm.msg"
  DEPENDENCIES sensor_msgs std_msgs # Add packages that above messages depend on, in this case sensor_msgs for ImgPcd.msg
)
```
5. Because the interfaces rely on `rosidl_default_generators` for generating language-specific code, you need to declare a dependency on it. Add the following lines to `package.xml` (of the inteface package) inside the `<package></package>` bracket, and make sure the indentation is correct:
```
<depend>sensor_msgs</depend>

<depend>std_msgs</depend>

<build_depend>rosidl_default_generators</build_depend>

<exec_depend>rosidl_default_runtime</exec_depend>

<member_of_group>rosidl_interface_packages</member_of_group>
```
6. Build the `interf` package. In the `ros2_ws` folder:
```
colcon build --packages-select interf
```
7. Source the package while in the `ros2_ws` folder:
```
. install/setup.bash
```
8. Now you can confirm that your interface creation worked by using the `ros2 interface show` command:
```
ros2 interface show interf/msg/ImgPcdTm
```
which should return:
```
sensor_msgs/Image img
sensor_msgs/PointCloud2 pcd
std_msgs/Float32 tmstp
```
9. Testing `ImgPcdTm` with `benchmark_publisher`. With some slight modifications to the `pipeline` package created in a previous tutorial, you can see `ImgPcdTm` in action. Here we create another publisher node class called `BenchmarkPublisher2`:

benchmark_publisher:
```
# BenchmarkPublisher2 uses a custom message type ImgPcdTm
class BenchmarkPublisher2(Node):
    def __init__(self):
        super().__init__('benchmark_publisher_2')
        self.logger = self.get_logger()
        self.logger.info('benchmark_publisher_2 started')

        # Set rate of publishing
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        # Create ImgPcdTm publisher
        self.imgpcdtm_publisher_ = self.create_publisher(ImgPcdTm, 'benchmark_imgpcdtm', 10)

        # Set data directory
        benchmark = 'multi'
        self.img_dir = f'/home/tong/github/ros2_ws/data/adc_benchmark/{benchmark}/images'
        self.pcd_dir = f'/home/tong/github/ros2_ws/data/adc_benchmark/{benchmark}/point_cloud'
        self.timestamp_dir = f'/home/tong/github/ros2_ws/data/adc_benchmark/{benchmark}/timestamp'
        
        # Set index and timestamp
        self.idx = 0
        self.timestamp = np.float32(0).item()			# CHANGE
        self.timestamp_last = np.float32(0).item()		# CHANGE
        self.timestamp_sum = np.float32(0).item()		# CHANGE
        self.time_run_sum = np.float32(0).item()		# CHANGE

    def timer_callback(self):
        """
        Reads image, point cloud and timestamp from disk and publishes them.
        """

        # Get frame information
        source = self.img_dir + f'/image{self.idx}.png'
        source_pcd = self.pcd_dir + f'/pcd{self.idx}.npy'
        source_timestamp = self.timestamp_dir + f'/t{self.idx}.npy'

        # Get frame image
        try:
            frame = np.load(source)
        except:
            try:
                # frame = np.array(cv2.cvtColor(cv2.imread(source), cv2.COLOR_BGR2RGB))
                frame = np.array(cv2.imread(source))
            except:
                print('Failed to load image')
                raise

        # Get frame pointcloud
        pcd = np.load(source_pcd)

        # Get frame timestamp
        self.timestamp = np.load(source_timestamp)[0].item()			# CHANGE
        self.timestamp_sum += self.timestamp - self.timestamp_last + 0.1875
        self.timestamp_last = self.timestamp

        # image message
        im_header = Header()
        i, d = divmod(self.timestamp, 1)
        stamp = Time()
        stamp.sec = int(i)
        stamp.nanosec = int(d*(10^9))
        im_header.stamp = stamp
        im_header.frame_id = 'benchmark'
        
        im_msg = Image()
        im_msg.header = im_header
        im_msg.height = frame.shape[0]
        im_msg.width = frame.shape[1]
        im_msg.encoding = 'rgb8'
        im_msg.is_bigendian = False
        im_msg.step = frame.shape[1] * 3
        im_msg.data = frame.tobytes()

        print(pcd.dtype)

        # point cloud message
        pcd_header = Header()
        i, d = divmod(self.timestamp, 1)
        stamp = Time()
        stamp.sec = int(i)
        stamp.nanosec = int(d*(10^9))
        pcd_header.stamp = stamp
        pcd_header.frame_id = 'benchmark'

        pcd_fields = [PointField(name='x', offset=0, datatype=PointField.FLOAT64, count=1),
                        PointField(name='y', offset=8, datatype=PointField.FLOAT64, count=1),
                        PointField(name='z', offset=16, datatype=PointField.FLOAT64, count=1)]

        pcd_msg = create_cloud(pcd_header, pcd_fields, pcd)

        # timestamp message
        t_msg = Float32()
        t_msg.data = self.timestamp
        
        # combine into an ImgPcdTm message and publish
        self.logger.info('Publishing ImgPcdTm')
        ipt_msg = ImgPcdTm()
        ipt_msg.img = im_msg
        ipt_msg.pcd = pcd_msg
        ipt_msg.tmstp = t_msg
        self.imgpcdtm_publisher_.publish(ipt_msg)

        # Increase frame index
        self.idx += 1
        if self.idx > 55:
            self.idx = 0
        # Log frame information
        self.logger.info('-'*20)
        self.logger.info(f'\nImgPcdTm: \nImg: {frame.shape}\nPcd: {pcd.shape}\nTimestamp: {self.timestamp}\n')
        self.logger.info('-'*20)
```
And also modify the `benchmark_subscriber` file:

(TBD)
10. For `package.xml` (in the packages that uses the custom interface definitions, `pipeline` package in this case) add the following line inside the `<package></package>` bracket:
```
<exec_depend>interf</exec_depend>
```
11. After making the above edits and saving all the changes, build the package while in `ros2_ws`:
```
colcon build --packages-select pipeline
```
12. Again, source the newly-built package by `. install/setup.bash`.
13. Run the new `benchmark_publisher` and (in another terminal) run the new `benchmark_subscriber`:
```
ros2 run pipeline benchmark_publisher
```
and 
```
ros2 run pipeline benchmark_subscriber
```

## Example 2 StrArr: A Custom String Array Message
For a list of detected 2D objects, we can use a custom string array message to carry the content. We can create a file `StrArr.msg` under `msg/` in the `perception_comm` package, with the following content:
```
string[] data
```
Then follow the above tutorial to set up the dependencies. Now when using this custom message type, send a list of strings into `StrArr.data`.


## Example 3 ImgBbxLbl: A Custom Message Containing Image, Bounding Box, and Label
For a list of detected 2D objects, we can also use a custom message that contains the image, the bounding box, and the label to pass the detection results to downstream nodes. We can create a file `ImgBbxLbl.msg` under `msg/` in in the `perception_comm` package, with the following content:
```
sensor_msgs/Image img
std_msgs/Float32MultiArray bbx
string[] lbl
```
Then follow the above tutorial to set up the dependencies.