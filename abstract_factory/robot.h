#pragma once
class Robot
{
public:
	Robot() {}
	~Robot()
	{
		cout << "로봇을 폐기합니다." << endl;
	}
private:
	wchar_t* name = nullptr;
	RobotHead* head;
	RobotBody* body;
	RobotArm* rArm;
	RobotArm* lArm;
	RobotLeg* rLeg;
	RobotLeg* lLeg;
public:
	void robotPrint(Robot* robot)
	{
		cout << "=====================================================================\n" << endl;
		cout << "삐비비빅-\n" << endl;
		cout << "로봇 코드는 " << robot << " 입니다." << endl;
		nullptr == this->name ? cout << "로봇에게 이름이 없습니다." << "\n" << endl : cout << "로봇의 이름은 " << robot->name << " 입니다." << endl;
		cout << "=====================================================================\n" << endl;
	}
	void robotInfo(Robot* robot)
	{
		cout << "==============================로봇 정보==============================\n" << endl;
		cout << "로봇 코드 : " << robot << "\n" << endl;
		nullptr == this->name ? cout << "로봇 이름 : 없음 " << "\n" << endl : cout << "로봇 이름 : " << robot->name << "\n" << endl;
		cout << "머리 부품번호 : " << head << "\n" << endl;
		cout << "몸통 부품번호 : " << body << "\n" << endl;
		cout << "오른팔 부품번호 : " << rArm << " // 왼팔 부품번호 : " << lArm << "\n" << endl;
		cout << "오른다리 부품번호 : " << rLeg << " // 왼다리 부품번호 : " << lLeg << "\n" << endl;
		cout << "=====================================================================\n" << endl;
	}

	void robotCombine(RobotHead* head, RobotBody* body, RobotArm* rArm, RobotArm* lArm, RobotLeg* rLeg, RobotLeg* lLeg)
	{
		this->head = head;
		this->body = body;
		this->rArm = rArm;
		this->lArm = lArm;
		this->rLeg = rLeg;
		this->lLeg = lLeg;
	}
	void robotTurnOn()
	{
		cout << "로봇을 켭니다." << endl;
	};
	virtual void robotFunc() = 0;
	virtual void robotAction() = 0;
	void robotTurnOff()
	{
		cout << "로봇을 끕니다." << endl;
	};
};