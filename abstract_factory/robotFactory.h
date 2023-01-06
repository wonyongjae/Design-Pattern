#pragma once
class RobotFactory
{
public:
	Robot* CreateRobot()
	{

		Robot* robot;
		int selectNum;
		printf("������ �κ��� �����ϼ���.\n");
		printf("1.�����κ� 2.�����κ� 3.���ȷκ�\n");
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
		cout << "�κ� ������ �����մϴ�." << endl;
		robot->robotCombine(new RobotHead(), new RobotBody(), new RobotArm(), new RobotArm(), new RobotLeg(), new RobotLeg());
		cout << "�κ��� �ϼ��Ǿ����ϴ�." << endl;
	}

};