[![Build Status](http://94.2.115.49:8080/buildStatus/icon?job=testing)](http://94.2.115.49:8080/job/testing/)

# FYP_Autonomus_Drone_DWM1001

Final year project that consist in autonomus drone, developed in ROS using UWB DWM1001 sensors

# We have 4 DWM1001 3 anchors and 1 tag
 The tag will be attached to the drone and the 3 anchors will be put on the ground, which should create a triangle.
 The goal is to make the ARDrone follow each anchor and one imaginary anchor which will be placed across coordinates 0,0.

# Example 123 
![alt text](https://raw.githubusercontent.com/20chix/FYP_Autonomus_Drone_DWM1001/master/FYP_Diagram.png?token=AO45C05pXrDjVLWjscxHtIeme5V2u6LIks5bdegywA%3D%3D)


### Roadmap
- [x] Create RTLS network from Android App
- [x] Access DWM1001 API via UART
- [x] Get Anchor coordinates in Python
- [x] Get Tag position in Python
- [x] Display Anchors in RViz
- [x] Display Tag in RViz
- [ ] Calculate shortest path from Tag to a Anchor using A* Algorithm
- [ ] Display shortest path in RViz
- [ ] Display actual path in RViz
- [ ] Dynamic configuration for DWM1001 dev board
- [ ] Dynamic configuration for drone
- [ ] Joystick controls for emergency takeoff and land
- [ ] Neural Network/AI that will manage flight controller after couple of laps
- [ ] Statistics for each lap
- [ ] Statistics for Neural Network/AI
