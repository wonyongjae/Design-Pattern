#pragma once
class SupportRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "�����κ� �Դϴ�." << endl;
	};
	virtual void robotAction()
	{
		cout << "�����κ��� ���� ������ �����մϴ�." << endl;
	};
};