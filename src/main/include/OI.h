/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#pragma once
#include <WPILib.h>
#include "RobotMap.h"
class OI {
private:
	Joystick*moveArmLeft;
	Button*releaseCargoShuttle;
	Button*releaseCargoRocket;
	Button*holdCargo;
	Button*resetCargo;
public:
	OI();
	~OI();
	Joystick* getDriveStickLeft();
	Joystick* getDriveStickRight();
	Joystick* getMoveArmLeft();
	Button* getPIDArm();
};









