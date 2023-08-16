#!/bin/bash
socat PTY,link=/tmp/robot_ttyACM0,raw TCP:192.168.100.52:54321 &
socat PTY,link=/tmp/robot_ttyUSB0,raw TCP:192.168.100.52:54322 &
