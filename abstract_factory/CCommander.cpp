#include "pch.h"
#include "CCommander.h"

CCommander* CCommander::getCommander() 
{
	if (CCommander::g_commander == nullptr)
	{
		CCommander::g_commander = new CCommander();
	}
	return CCommander::g_commander;
}

void CCommander::setPilots(std::vector<CPilot*> arg_soldierList) 
{
	this->m_soldierList = arg_soldierList;
}

void CCommander::fire() 
{
	std::vector<CPilot*>::iterator m_sIter;
	if (this->m_soldierList.size() > 0)
	{
		std::cout << "사령관이 공격을 지시합니다." << "\n";
		for (m_sIter = this->m_soldierList.begin(); m_sIter != m_soldierList.end(); ++m_sIter)
		{
			(*m_sIter)->fire();
		}
	}
	else 
	{
		std::cout << "병력이 없습니다." << "\n";
	}
}

CCommander* CCommander::g_commander = nullptr;