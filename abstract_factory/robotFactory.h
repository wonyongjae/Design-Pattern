#pragma once
class RobotFactory
{
public:
	Robot* CreateRobot()
	{

		Robot* robot;
		int selectNum;
		printf("생성할 로봇을 선택하세요.\n");
		printf("1.전투로봇 2.지원로봇 3.보안로봇\n");
		scanf_s("%d", &selectNum);
		switch (selectNum)
		{
		case 1:
			robot = new BattleRobot();
			robotConstruction(robot);
			return robot;
			break;
		case 2:
			robot = new SupportRobot();
			robotConstruction(robot);
			return robot;
			break;
		case 3:
			robot = new SecurityRobot();
			robotConstruction(robot);
			return robot;
			break;
		default:
			break;
		}
	}
	void robotConstruction(Robot* robot)
	{
		cout << "로봇 조립을 시작합니다." << endl;
		robot->robotCombine(new RobotHead(), new RobotBody(), new RobotArm(), new RobotArm(), new RobotLeg(), new RobotLeg());
		cout << "로봇이 완성되었습니다." << endl;
	}

};