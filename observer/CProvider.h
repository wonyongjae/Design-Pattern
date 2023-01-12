#pragma once
#include "CSubject.h"
#include <typeinfo>
//#include <ctime>
//#include <time.h>

class CProvider : public CSubject
{
public:
	CProvider(){}
	virtual ~CProvider() {}

	void registObserver(CObserver *arg_observers) override;
	void removeObserver(CObserver *arg_observers) override;
	void notify() override;

	//void setMessege();
	void sendMessege();
	void showLog();

	// 잠시 중단
	class CMessege
	{
	public:
		std::string m_sIP;
		std::string m_rIP;
		// time_t m_curDT = time(NULL);
		std::string m_content;
	};
private:
	std::list<CObserver*> m_subscriber;
	//std::string m_ipAddr = "192.168.0.150";
	std::string m_messemge;
	std::vector<std::string> m_log;
};