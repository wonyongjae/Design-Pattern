#pragma once
class BattleRobot : public Robot
{
public:
	virtual void robotFunc()
	{
		cout << "전투로봇 입니다." << endl;
	};
	virtual void robotAction()
	{
		cout << "적을 찾아 전투를 시작합니다." << endl;
	};
};