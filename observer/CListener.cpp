#include "pch.h"
#include "CListener.h"

void CListener::listen(const std::string &arg_messege)
{
	//this->m_messege = &arg_messege;
	std::cout << this << " ���� �� �޼��� : " << (*&arg_messege) << "\n\n";
};
void CListener::registMe()
{
	std::cout << this << " �� ȣ��Ʈ�� �����մϴ�." << "\n";
	this->m_provider.registObserver(this);
};
void CListener::removeMe()
{
	std::cout << this << " �� ������ ����մϴ�." << "\n";
	this->m_provider.removeObserver(this);
};

