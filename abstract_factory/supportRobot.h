#pragma once
class SupportRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "지원로봇 입니다." << endl;
	};
	virtual void robotAction()
	{
		cout << "전투로봇을 따라 전투를 지원합니다." << endl;
	};
};