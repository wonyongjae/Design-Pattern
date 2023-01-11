#pragma once
#include "CSoldier.h"

class CPilot : public CSoldier
{
public:
	CPilot() {}
	virtual ~CPilot() {}

	virtual void driveing() = 0;
	virtual void fire() = 0;
};