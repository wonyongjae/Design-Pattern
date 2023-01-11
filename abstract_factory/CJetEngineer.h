#pragma once
#include "CEngineer.h"
#include <iostream>

class CJetEngineer : public CEngineer 
{
public:
	CJetEngineer() {}
	~CJetEngineer() {}

	void maintenance() override;
	void repair() override;
};