#pragma once
#include "CAttacker.h"
class CFighter :public CAttacker
{
public:
	int m_damage = 15;
	virtual void fire();
};