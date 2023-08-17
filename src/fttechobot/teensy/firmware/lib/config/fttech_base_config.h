#ifndef FTTECH_BASE_CONFIG_H
#define FTTECH_BASE_CONFIG_H

#define FTTECH_BASE MECANUM

//uncomment the motor driver you're using
#define USE_L298_DRIVER


#define USE_MPU6050_IMU


#define DEBUG 1

#define K_P 0.1 // P constant
#define K_I 0.1 // I constant
#define K_D 0.1 // D constant

//define your robot' specs here
#define MAX_RPM 4                // motor's maximum RPM
#define COUNTS_PER_REV 1550      // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.08      // wheel's diameter in meters
#define PWM_BITS 8               // PWM Resolution of the microcontroller
#define LR_WHEELS_DISTANCE 0.25  // distance between left and right wheels
#define FR_WHEELS_DISTANCE 0.30  // distance between front and rear wheels. Ignore this if you're on 2WD/ACKERMANN
#define MAX_STEERING_ANGLE 0.415 // max steering angle. This only applies to Ackermann steering

/// ENCODER PINS
#define MOTOR1_ENCODER_A 18
#define MOTOR1_ENCODER_B 31 

#define MOTOR2_ENCODER_A 19
#define MOTOR2_ENCODER_B 38

#define MOTOR3_ENCODER_A 3
#define MOTOR3_ENCODER_B 49

#define MOTOR4_ENCODER_A 2
#define MOTOR4_ENCODER_B 23

//MOTOR PINS
#ifdef USE_L298_DRIVER
  #define MOTOR_DRIVER L298

  #define MOTOR1_PWM 12
  #define MOTOR1_IN_A 35
  #define MOTOR1_IN_B 34

  #define MOTOR2_PWM 8
  #define MOTOR2_IN_A 37
  #define MOTOR2_IN_B 36

  #define MOTOR3_PWM 9
  #define MOTOR3_IN_A 42
  #define MOTOR3_IN_B 43

  #define MOTOR4_PWM 5
  #define MOTOR4_IN_A A4
  #define MOTOR4_IN_B A5

  #define PWM_MAX pow(2, PWM_BITS) - 1
  #define PWM_MIN -PWM_MAX
#endif 

#define STEERING_PIN 7

#endif