#pragma once
#include <vector>
#include <iostream>
#include <typeinfo>
#include "CAttacker.h"
#include "CSoldier.h"
#include "CTank.h"
#include "CFighter.h"
#include "CTarget.h"

class CCommander
{
public:
	CCommander() {}
	CCommander(std::vector<CAttacker*> arg_attackers){this->m_attackers = arg_attackers;}
	~CCommander() 
	{
		//if (m_attackers != nullptr) { delete m_attackers; };
		if (m_soldier != nullptr) { delete m_soldier; };
		if (m_tank != nullptr) { delete m_tank; };
		if (m_fighter != nullptr) { delete m_fighter; };
	}
	std::vector<CAttacker*> m_attackers;
	CSoldier* m_soldier;
	CTank* m_tank;
	CFighter* m_fighter;

	void setSoldier(CSoldier* arg_soldier);
	void setTank(CTank* arg_tank);
	void setFighter(CFighter* arg_fighter);
	int fireTarget(CTarget* arg_target);
};