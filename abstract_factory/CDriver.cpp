#include "pch.h"
#include "CDriver.h"

void CDriver::setTruck(std::vector<CSoldier*> arg_truck)
{
	this->m_truck = arg_truck;
}

void CDriver::load(CSoldier* arg_soldier) 
{
	if (this->m_truck.size() < 10)
	{
		std::cout << arg_soldier << " 을 탑승 시킵니다." << "\n";
		this->m_truck.push_back(arg_soldier);
		std::cout << "남은 자리는 : " << 10 - this->m_truck.size() << " 석" << "\n";
	}
	else 
	{
		std::cout << "더 탑승시킬 수 없습니다." << "\n";
	}
}

void CDriver::drop(CSoldier* arg_soldier) 
{
	std::vector<CSoldier*>::iterator m_sIter;
	if (this->m_truck.size() > 0)
	{
		for (m_sIter = this->m_truck.begin(); m_sIter != m_truck.end(); ++m_sIter)
		{
			if ((*m_sIter) == arg_soldier)
			{
				std::cout << *m_sIter << " 을 내려줍니다." << "\n";
				this->m_truck.erase(m_sIter);
				std::cout << "남은 자리는 : " << 10 - this->m_truck.size() << " 석" << "\n";
			};
		}
	}
	else
	{
		std::cout << "병력이 없습니다." << "\n";
	}
}