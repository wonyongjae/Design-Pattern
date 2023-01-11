#pragma once
#include "CAttacker.h"
class CSoldier :public CAttacker
{
public:
	int m_damage = 3;
	virtual void fire();
};