How to set up the MRG Optitrack Room:
https://docs.google.com/document/d/15Ql23IQd8JdZ4hvZmW4vM2Irdwb2OEobTJmw2DPiDGA/edit?tab=t.0

To get data on local PC, clone this repo (FOR ROS JAZZY):
Edit ./src/mocap4ros2_optitrack/mocap4r2_optitrack_driver/config/movap4r2_optitrack_driver_params.yaml to set IP's and change the name for the rigidbody you want. If nothing has changed, the IP of the laptop running motive is 192.168.1.184. Make sure in the Settings > Streaming tab, and also check that Rigid Bodies is checked. On the right panel in assets, click on the Rigid Body you want, make sure the streaming ID is 1 and the name matches the one in the .yaml file. You can double check that there is data by going to the Info tab in Motive and changing it to Rigid Bodies and looking at the data, then looking at the bottom right of motive and looking at the broadcast symbol to make sure it is connected. 

Link to cloned repo is https://github.com/MOCAP4ROS2-Project/mocap4ros2_optitrack

To Launch:
ros2 launch mocap4r2_optitrack_driver optitrack2.launch.py

To get data (do this every time):
ros2 lifecycle set /mocap4r2_optitrack_driver_node activate
