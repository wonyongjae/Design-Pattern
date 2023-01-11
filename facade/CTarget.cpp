#include "pch.h"
#include "CTarget.h"

void CTarget::showTargetInfo()
{
	if (CTarget::m_lifePoint < 0)
	{
		std::cout << "목표물이 폭파되었습니다." << "\n";
	}
	else if (CTarget::m_lifePoint > 50)
	{
		std::cout << "목표물이 불타오릅니다." << "\n";
	}
}
