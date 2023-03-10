#include "pch.h"
#include <iostream>
#include <string>
#include "CTarget.h"
#include "CAttacker.h"
#include "CCommander.h"
#include "CSoldier.h"
#include "CTank.h"
#include "CFighter.h"


int main()
{
	std::vector<CAttacker*> ptr_attackters;

	CTarget* ptr_target = new CTarget;
	CCommander* ptr_commander = new CCommander(ptr_attackters);
	ptr_commander->m_attackers->push_back();

	ptr_commander->setSoldier(new CSoldier);
	ptr_commander->setTank(new CTank);
	ptr_commander->setFighter(new CFighter);
	int result = (ptr_commander->fireTarget(ptr_target));
	std::cout << "==========================================" << "\n";
	result > 0 ? std::cout << "작전 성공" << "\n" : std::cout << "작전 실패" << "\n";
	std::cout << "==========================================" << "\n";
}

/*
	std::vector<CAttacker>* ptr_attackters = new std::vector<CAttacker>;

	std::cout << &ptr_commander->m_attackers << "\n";
	CAttacker* ptr_soldier = (CAttacker*)new CSoldier;
	ptr_commander->m_attackers->push_back(*ptr_soldier);
	std::cout << "==========================================" << "\n";
	ptr_commander->m_attackers->data()->fire();
	std::cout << "==========================================" << "\n";
	std::cout << "\n" << "\n" << "\n";
*/
