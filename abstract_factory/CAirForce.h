#pragma once
#include "CSoldierFactory.h"
#include "CJetPilot.h"
#include "CJetEngineer.h"

class CAirForce : public CSoldierFactory
{
public:
	CAirForce() {}
	~CAirForce() {}

	CPilot* createPilot() override;
	CEngineer* createEngineer() override;
};