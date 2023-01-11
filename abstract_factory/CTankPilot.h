#pragma once
#include "CPilot.h"
#include <iostream>

class CTankPilot : public CPilot 
{
public:
	CTankPilot() {}
	~CTankPilot() {}

	void driveing() override;
	void fire() override;
};