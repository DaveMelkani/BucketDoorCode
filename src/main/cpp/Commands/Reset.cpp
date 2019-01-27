/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/Reset.h"
#include "Robot.h"
#include "iostream"
Reset::Reset() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::cargo);
}

// Called just before this Command runs the first time
void Reset::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Reset::Execute() 
{
 // Robot::cargo->reset();
  std::cout << Robot::cargo->getPosition() << std::endl;
}

// Make this return true when this Command no longer needs to run execute()
bool Reset::IsFinished() { return true; }

// Called once after isFinished returns true
void Reset::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Reset::Interrupted() {}
