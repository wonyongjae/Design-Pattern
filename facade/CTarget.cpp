#include "pch.h"
#include "CTarget.h"

void CTarget::showTargetInfo()
{
	if (CTarget::m_lifePoint < 0)
	{
		std::cout << "��ǥ���� ���ĵǾ����ϴ�." << "\n";
	}
	else if (CTarget::m_lifePoint > 50)
	{
		std::cout << "��ǥ���� ��Ÿ�����ϴ�." << "\n";
	}
}
