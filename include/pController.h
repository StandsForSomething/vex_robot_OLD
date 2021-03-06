#ifndef ARMPCONTROLLER_H_
#define ARMPCONTROLLER_H_

typedef struct pControllerArgs
{
    double pid_Kp;
    double *pidValue;
    motor pidMotor;
    sensor pidSensor;
    bool *disabled;
    bool *movement;
    bool arm;
}pControllerArgs;

extern double claw1PidValue;
extern bool disableClaw1Pid;
extern bool claw1Moving;

extern double claw2PidValue;
extern bool disableClaw2Pid;
extern bool claw2Moving;

extern double driveLPidValue;
extern double driveRPidValue;
extern bool disableDrivePid;
extern bool driveLMoving;
extern bool driveRMoving;

extern double liftPidValue;
extern bool disableArmPid;
extern bool liftMoving;

extern void pidController(void *taskArgs);
#endif
