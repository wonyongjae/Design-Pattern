#pragma once
class SecurityRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "���ȷκ� �Դϴ�." << endl;
	};
	virtual void robotAction()
	{
		cout << "������ ��ȭ�ϰ� ������ ����մϴ�." << endl;
	};
};