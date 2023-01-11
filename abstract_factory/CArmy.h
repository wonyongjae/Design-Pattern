#pragma once
#include "CSoldierFactory.h"
#include "CTankEngineer.h"
#include "CTankPilot.h"
#include "CDriver.h"

class CArmy : public CSoldierFactory
{
public:
	CArmy() {}
	~CArmy() {}

	CPilot* createPilot() override;
	CEngineer* createEngineer() override;
	CDriver* createDriver();
};