#pragma once
#include "CSoldierFactory.h"
#include "CSubmarinePilot.h"
#include "CSubmarineEngineer.h"

class CNavy : public CSoldierFactory 
{
public:
	CNavy() {}
	~CNavy() {}

	CPilot* createPilot() override;
	CEngineer* createEngineer() override;
};