#include "pch.h"
#include "CProvider.h"

void CProvider::registObserver(CObserver *arg_observers)
{
	this->m_subscriber.push_back(arg_observers);
	std::cout << arg_observers << " -> 구독 등록" << "\n";
	std::cout << "총 구독자 : " << m_subscriber.size() << " 명" << "\n\n";
};

void CProvider::removeObserver(CObserver *arg_observers)
{
	std::cout << arg_observers << " 를 찾습니다." << "\n";
	std::list<CObserver *>::iterator m_iter = this->m_subscriber.begin();

	while (m_iter != this->m_subscriber.end())
	{
		if (*m_iter == arg_observers)
		{
			std::cout << (*&arg_observers) << " -> 구독 취소" << "\n\n";
			this->m_subscriber.erase(m_iter++);
		}
		else
		{
			//std::cout << (*&arg_observers) << " 는 구독자 명단에 없습니다." << "\n\n";
			++m_iter;
		}
	}

};

void CProvider::notify()
{
	std::list<CObserver *>::iterator m_iter = this->m_subscriber.begin();
	while (m_iter != this->m_subscriber.end())
	{
		(*m_iter++)->listen(this->m_messemge);
	}

};

void CProvider::sendMessege()
{
	std::cout << "호스트가 구독자들과 연결합니다." << "\n\n";
	bool isRun = true;
	while (isRun)
	{
		std::cout << "=========호스트 메세지=========" << "\n";
		std::cout << "======= 연결 끊기 : 2번 =======" << "\n";
		std::cout << "===============================" << "\n";
		std::cout << "-> ";
		int selectNum;
		scanf_s("%d", &selectNum);

		if (selectNum != 2)
		{
			selectNum = 1;
		}

		switch (selectNum)
		{
		case 1:
			
			std::cin >> this->m_messemge;
			std::cout << "\n\n";
			this->m_log.push_back(this->m_messemge);
			notify();
			break;
		case 2:
			std::cout << "공지를 마칩니다." << "\n";
			isRun = false;
			break;
		}
	}
};

void CProvider::showLog()
{
	std::cout << "==========Messege.log==========" << "\n";
	std::vector<std::string>::iterator m_logiter;

	for (m_logiter = this->m_log.begin(); m_logiter != this->m_log.end(); ++m_logiter)
	{
		std::cout << *m_logiter << "\n";
	}
	std::cout << "==============End==============" << "\n\n";
};