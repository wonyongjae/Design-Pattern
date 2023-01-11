#pragma once
#include "CPilot.h"
#include <iostream>

class CJetPilot : public CPilot
{
public:
	CJetPilot() {}
	~CJetPilot() {}

	void driveing() override;
	void fire() override;
};