#pragma once
class BattleRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "�����κ� �Դϴ�." << endl;
	};
	virtual void robotAction()
	{
		cout << "���� ã�� ������ �����մϴ�." << endl;
	};
};