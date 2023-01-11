#pragma once
#include "CSoldier.h"

class CEngineer : public CSoldier
{
public:
	CEngineer() {}
	virtual ~CEngineer() {}

	virtual void maintenance() = 0;
	virtual void repair() = 0;
};