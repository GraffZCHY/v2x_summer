import rclpy
from rclpy.node import Node
from perception_comm.msg import CAN

class basic_subscriber(Node):

    print("Listening v2x_msg topic...")

    def __init__(self):
        super().__init__('basic_subscriber')
        self.subscription = self.create_subscription(
            CAN,
            'v2x_msg',  # Topic name
            self.message_callback,
            10  # QoS profile, adjust as needed
        )
        self.subscription  # prevent unused variable warning

    def message_callback(self, msg):
        # Callback function to process received messages
        self.get_logger().info('Received message: %s' % msg)

def main(args=None):
    rclpy.init(args=args)
    node = basic_subscriber()
    rclpy.spin(node)