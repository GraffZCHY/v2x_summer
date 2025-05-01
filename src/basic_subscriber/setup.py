from setuptools import setup

package_name = "basic_subscriber"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="Derin Durak",
    maintainer_email="durak.3@osu.edu",
    description="This is a basic ROS subscriber for Buckeye Autodrive",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "basic_subscriber = basic_subscriber.basic_subscriber:main"
        ],
    },
)
