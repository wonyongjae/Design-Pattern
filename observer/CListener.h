#pragma once
#include "CObserver.h"
#include "CProvider.h"

class CListener : public CObserver
{
public:
	CListener
	(CProvider &provide) : m_provider(provide){}
	~CListener() {}

	void listen(const std::string &arg_messege) override;
	void removeMe();
	void registMe();

private:
	CProvider &m_provider;
	//std::string* m_messege;
};