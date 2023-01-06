#pragma once
class Robot
{
public:
	Robot() {}
	~Robot()
	{
		cout << "�κ��� ����մϴ�." << endl;
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
		cout << "�ߺ���-\n" << endl;
		cout << "�κ� �ڵ�� " << robot << " �Դϴ�." << endl;
		nullptr == this->name ? cout << "�κ����� �̸��� �����ϴ�." << "\n" << endl : cout << "�κ��� �̸��� " << robot->name << " �Դϴ�." << endl;
		cout << "=====================================================================\n" << endl;
	}
	void robotInfo(Robot* robot)
	{
		cout << "==============================�κ� ����==============================\n" << endl;
		cout << "�κ� �ڵ� : " << robot << "\n" << endl;
		nullptr == this->name ? cout << "�κ� �̸� : ���� " << "\n" << endl : cout << "�κ� �̸� : " << robot->name << "\n" << endl;
		cout << "�Ӹ� ��ǰ��ȣ : " << head << "\n" << endl;
		cout << "���� ��ǰ��ȣ : " << body << "\n" << endl;
		cout << "������ ��ǰ��ȣ : " << rArm << " // ���� ��ǰ��ȣ : " << lArm << "\n" << endl;
		cout << "�����ٸ� ��ǰ��ȣ : " << rLeg << " // �޴ٸ� ��ǰ��ȣ : " << lLeg << "\n" << endl;
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
		cout << "�κ��� �մϴ�." << endl;
	};
	virtual void robotFunc() = 0;
	virtual void robotAction() = 0;
	void robotTurnOff()
	{
		cout << "�κ��� ���ϴ�." << endl;
	};
};