#include "pch.h"
#include "CListener.h"

void CListener::listen(const std::string &arg_messege)
{
	//this->m_messege = &arg_messege;
	std::cout << this << " 에게 온 메세지 : " << (*&arg_messege) << "\n\n";
};
void CListener::registMe()
{
	std::cout << this << " 가 호스트를 구독합니다." << "\n";
	this->m_provider.registObserver(this);
};
void CListener::removeMe()
{
	std::cout << this << " 가 구독을 취소합니다." << "\n";
	this->m_provider.removeObserver(this);
};

