#pragma once
class SecurityRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "보안로봇 입니다." << endl;
	};
	virtual void robotAction()
	{
		cout << "보안을 강화하고 거점을 방어합니다." << endl;
	};
};