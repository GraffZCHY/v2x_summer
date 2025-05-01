import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from gps_msgs.msg import GPSFix  # Assuming GPS data might be useful
from perception_comm.msg import CAN  # Custom message type for structured output
import json
import binascii
from .out import DSRC  # Assuming DSRC has the J2735 decoding logic


class V2XPublisher(Node):

    def __init__(self, name):
        super().__init__(name)
        # Create publisher with custom CAN message type
        self.publisher_ = self.create_publisher(CAN, 'v2x_j2735_decoded', 10)

        # Define test messages (Hexadecimal J2735 encoded messages)
        self.test_messages = [
            "0014deadbeef... 1",
            "0014abcdef1234... 2",
            "0014abcdef1234... 3"
        ]

        # Timer to publish messages every second
        self.timer = self.create_timer(1.0, self.timer_callback)

    def decode(self, hex_string):
        """
        Decode a J2735 message from a hex string into a structured format.
        """
        messageFrame_var = DSRC.MessageFrame

        try:
            decoded_message = messageFrame_var.from_uper(binascii.unhexlify(hex_string))
            json_data = json.loads(messageFrame_var.to_json(decoded_message))  # Convert JSON string to dictionary
            return json_data
        except Exception as e:
            self.get_logger().error(f"Error decoding message: {str(e)}")
            return None  

    def build_can_message(self, decoded_json):
        """
        Convert decoded JSON into a CAN message format.
        """
        can_msg = CAN()

        # Extracting BasicSafetyMessage Data
        if "value" in decoded_json and "BasicSafetyMessage" in decoded_json["value"]:
            bsm = decoded_json["value"]["BasicSafetyMessage"]

            # Set core data fields
            core_data = bsm.get("coreData", {})

            can_msg.vehicle_location = [
                core_data.get("lat", 0) / 10**7,  # Convert to float degrees
                core_data.get("long", 0) / 10**7,
                core_data.get("elev", 0)
            ]

            can_msg.vehicle_orientation = [
                core_data.get("heading", 0),
                core_data.get("angle", 0)
            ]

            can_msg.a_v_state = [
                core_data.get("speed", 0) / 100  # Convert to m/s
            ]

            # Extract acceleration set
            accel_set = core_data.get("accelSet", {})
            can_msg.road_state = [
                accel_set.get("long", 0),
                accel_set.get("lat", 0),
                accel_set.get("vert", 0),
                accel_set.get("yaw", 0)
            ]

            # Extract brake system
            brakes = core_data.get("brakes", {})
            can_msg.traffic_signal_heads = [
                brakes.get("wheelBrakes", 0)
            ]

            # Handle Part II content if available
            if "partII" in bsm:
                for part in bsm["partII"]:
                    if "partII-Value" in part:
                        if "VehicleSafetyExtensions" in part["partII-Value"]:
                            safety_ext = part["partII-Value"]["VehicleSafetyExtensions"]

                            can_msg.objects = [
                                int(safety_ext.get("lights", "0"), 2)  # Convert binary to integer
                            ]

                            # Path History
                            if "pathHistory" in safety_ext:
                                path_points = safety_ext["pathHistory"].get("crumbData", [])
                                if path_points:
                                    can_msg.object_track_a = [
                                        path_points[0].get("latOffset", 0),
                                        path_points[0].get("lonOffset", 0)
                                    ]

        return can_msg

    def timer_callback(self):
        """
        Called every 1 second; decodes and publishes J2735 messages.
        """
        for hex_data in self.test_messages:
            if hex_data.startswith("0014"):
                decoded_json = self.decode(hex_data)
                if decoded_json:
                    can_msg = self.build_can_message(decoded_json)
                    self.publisher_.publish(can_msg)
                    self.get_logger().info(f"Published structured V2X message: {can_msg}")
                else:
                    self.get_logger().warn(f"Decoding failed for message: {hex_data}")
            else:
                self.get_logger().info(f"Skipping (not 0014): {hex_data}")


def main(args=None):
    rclpy.init(args=args)
    node = V2XPublisher("v2x_j2735_decoder")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
