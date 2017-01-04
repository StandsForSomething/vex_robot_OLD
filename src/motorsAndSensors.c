#include "main.h"
//////////
//motors//
//////////

//right motors
motor RBDriveI = {3, false};
motor RBDriveO = {4, false};
motor RFDrive = {5, false};

//left motors
motor LFDrive = {6, true};
motor LBDriveI = {7, true};
motor LBDriveO = {8, true};

//lift motors
motor leftLift1 = {10, true};
motor leftLift2 = {9, true};
motor rightLift1 = {1, false};
motor rightLift2 = {2, false};

///////////
//sensors//
///////////
//digital
sensor powerExpandJumper = {10, DIGITAL, true};
//analog
sensor powerExpand = {1, ANALOG, false};
sensor autoSelect = {2, ANALOG, false};
sensor armPot = {3, ANALOG, false};

//encoders
encoder encoderLeft;
encoder encoderRight;

void encoderSetup()
{
    initEncoderTW(&encoderLeft, 8, 9, true, SPEED, ROTATIONS, 1.0);
    initEncoderTW(&encoderRight, 11, 12, false, SPEED, ROTATIONS, 1.0);
}
