/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
//#include "Commands/ArmPositionPID.h"
#include "Commands/MoveCargoDoor.h"
#include "Commands/Reset.h"
#include "ctre/Phoenix.h"
#include "WPILib.h"
//#include "Commands/LeftRightDrive.h"


OI::OI() : 
moveArmLeft(new Joystick(armMovePort)),
releaseCargoShuttle(new JoystickButton(moveArmLeft, 5)),
releaseCargoRocket(new JoystickButton(moveArmLeft,  6)),
holdCargo(new JoystickButton(moveArmLeft, 7)),
resetCargo(new JoystickButton(moveArmLeft, 8)) {
releaseCargoShuttle->ToggleWhenPressed(new MoveCargoDoor(44));
releaseCargoRocket->ToggleWhenPressed(new MoveCargoDoor(5));
holdCargo->ToggleWhenPressed(new MoveCargoDoor(-15));
resetCargo->WhenPressed(new Reset());
}
Joystick* OI::getMoveArmLeft() {
	return moveArmLeft;
}


