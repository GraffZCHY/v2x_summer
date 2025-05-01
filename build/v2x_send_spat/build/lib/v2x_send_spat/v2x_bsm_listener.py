import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import json

class V2XBSMListener(Node):
    def __init__(self):
        super().__init__("v2x_bsm_listener")

        # Subscriber to listen to the decoded BSM messages
        self.subscription = self.create_subscription(
            String, 
            "v2x_decoded_bsm",  # The topic name
            self.listener_callback, 
            10
        )
        self.subscription  # Prevent unused variable warning

        self.get_logger().info("V2X BSM Listener Node Initialized - Listening for BSM messages...")

    def listener_callback(self, msg):
        """Callback function to process incoming BSM messages."""
        try:
            # Parse the JSON message
            bsm_data = json.loads(msg.data)
            
            # Print the received BSM message
            self.get_logger().info(f"Received BSM Message: {json.dumps(bsm_data, indent=2)}")

        except json.JSONDecodeError as e:
            self.get_logger().error(f"Failed to decode JSON: {str(e)}")


def main(args=None):
    rclpy.init(args=args)
    node = V2XBSMListener()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
