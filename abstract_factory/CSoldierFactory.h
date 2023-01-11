#pragma once
#include "CPilot.h"
#include "CEngineer.h"

class CSoldierFactory
{
public:
	CSoldierFactory() {}
	virtual ~CSoldierFactory() {}

	CPilot* newPilot() 
	{
		CPilot* ret_ptr_pilot = createPilot();
		return ret_ptr_pilot;
	}
	CEngineer* newEngineer()
	{
		CEngineer* ret_ptr_engineer = createEngineer();
		return ret_ptr_engineer;
	}

	virtual CPilot* createPilot() = 0;
	virtual CEngineer* createEngineer() = 0;
};