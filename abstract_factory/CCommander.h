#pragma once
#include <iostream>
#include <vector>
#include "CPilot.h"


class CCommander 
{
private:
	CCommander() {}
	~CCommander() {}

public:
	static CCommander* g_commander;
	CCommander(const CCommander& obj) = delete;
	
	std::vector<CPilot*> m_soldierList;
	
	static CCommander* getCommander();
	void setPilots(std::vector<CPilot*> arg_soldierList);
	void fire();
};

