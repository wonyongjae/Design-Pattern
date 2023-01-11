#pragma once
#include "CEngineer.h"
#include <iostream>

class CTankEngineer : public CEngineer 
{
public:
	CTankEngineer() {}
	~CTankEngineer() {}

	void maintenance() override;
	void repair() override;
};