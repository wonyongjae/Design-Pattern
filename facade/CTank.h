#pragma once
#include "CAttacker.h"
class CTank :public CAttacker
{
public:
	int m_damage = 10;
	virtual void fire();
};