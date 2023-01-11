#pragma once
#include "CEngineer.h"
#include <iostream>

class CSubmarineEngineer : public CEngineer 
{
public:
	CSubmarineEngineer() {}
	~CSubmarineEngineer() {}

	void maintenance() override;
	void repair() override;
};