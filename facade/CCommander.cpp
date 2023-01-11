#include "pch.h"
#include "CCommander.h"
#include "CTarget.h"

int CCommander::fireTarget(CTarget* arg_target)
{

	if (this->m_soldier == nullptr && this->m_tank == nullptr && this->m_fighter == nullptr)
	{
		std::cout << "������ �����Ƿ� ������ ������ �� �����ϴ�." << "\n";
		return 0;
	}

	std::cout << "��ɰ��� ���� ������ �����մϴ�." << "\n";
	if (this->m_soldier != nullptr)
	{
		this->m_soldier->fire();
	}
	if (this->m_tank != nullptr)
	{
		this->m_tank->fire();
	}
	if (this->m_fighter != nullptr)
	{
		this->m_fighter->fire();
	}


	while (arg_target->m_lifePoint > 0)
	{
		if (this->m_soldier != nullptr)
		{
			arg_target->m_lifePoint = arg_target->m_lifePoint - (this->m_soldier->m_damage);
			printf("���� ��ǥ���� ü�� %d \n", arg_target->m_lifePoint);
		}

		if (this->m_tank != nullptr)
		{
			arg_target->m_lifePoint = arg_target->m_lifePoint - (this->m_tank->m_damage);
			printf("���� ��ǥ���� ü�� %d \n", arg_target->m_lifePoint);
		}

		if (this->m_fighter != nullptr)
		{
			arg_target->m_lifePoint = arg_target->m_lifePoint - (this->m_fighter->m_damage);
			printf("���� ��ǥ���� ü�� %d \n", arg_target->m_lifePoint);
		}
		arg_target->showTargetInfo();
	}

	return 1;
};

void CCommander::setSoldier(CSoldier* arg_soldier)
{
	this->m_soldier = arg_soldier;
};

void CCommander::setTank(CTank* arg_tank)
{
	this->m_tank = arg_tank;
};

void CCommander::setFighter(CFighter* arg_fighter)
{
	this->m_fighter = arg_fighter;
};