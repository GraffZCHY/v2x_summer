from setuptools import find_packages
from setuptools import setup

setup(
    name='perception_comm',
    version='0.0.0',
    packages=find_packages(
        include=('perception_comm', 'perception_comm.*')),
)
