#pragma once
#include "CPilot.h"
#include <iostream>

class CSubmarinePilot : public CPilot
{
public:
	CSubmarinePilot() {}
	~CSubmarinePilot() {}

	void driveing() override;
	void fire() override;

};