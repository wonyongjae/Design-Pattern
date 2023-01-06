#include "pch.h"
#include <iostream>
using namespace std;
#include "robotParts.h"
#include "robot.h"
#include "battleRobot.h"
#include "supportRobot.h"
#include "securityRobot.h"
#include "robotFactory.h"


int main()
{

	printf("-------------------------------------------------------\n");

	RobotFactory factory;
	Robot* robot = factory.CreateRobot();
	robot->robotInfo(robot);
	robot->robotPrint(robot);
	robot->robotTurnOn();
	robot->robotFunc();
	robot->robotAction();
	robot->robotTurnOff();

	printf("-------------------------------------------------------\n");

	robot->~Robot();
	//wchar_t* robot_name[20];
	//printf("생성되는 로봇의 이름은 무엇인가요?");
	//scanf_s("%c", &robot_name);
	//robot->Set_Name(&robot_name);
}
