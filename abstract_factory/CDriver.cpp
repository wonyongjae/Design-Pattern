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
		std::cout << arg_soldier << " �� ž�� ��ŵ�ϴ�." << "\n";
		this->m_truck.push_back(arg_soldier);
		std::cout << "���� �ڸ��� : " << 10 - this->m_truck.size() << " ��" << "\n";
	}
	else 
	{
		std::cout << "�� ž�½�ų �� �����ϴ�." << "\n";
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
				std::cout << *m_sIter << " �� �����ݴϴ�." << "\n";
				this->m_truck.erase(m_sIter);
				std::cout << "���� �ڸ��� : " << 10 - this->m_truck.size() << " ��" << "\n";
			};
		}
	}
	else
	{
		std::cout << "������ �����ϴ�." << "\n";
	}
}