#include "pch.h"
#include "CProvider.h"

void CProvider::registObserver(CObserver *arg_observers)
{
	this->m_subscriber.push_back(arg_observers);
	std::cout << arg_observers << " -> ���� ���" << "\n";
	std::cout << "�� ������ : " << m_subscriber.size() << " ��" << "\n\n";
};

void CProvider::removeObserver(CObserver *arg_observers)
{
	std::cout << arg_observers << " �� ã���ϴ�." << "\n";
	std::list<CObserver *>::iterator m_iter = this->m_subscriber.begin();

	while (m_iter != this->m_subscriber.end())
	{
		if (*m_iter == arg_observers)
		{
			std::cout << (*&arg_observers) << " -> ���� ���" << "\n\n";
			this->m_subscriber.erase(m_iter++);
		}
		else
		{
			//std::cout << (*&arg_observers) << " �� ������ ��ܿ� �����ϴ�." << "\n\n";
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
	std::cout << "ȣ��Ʈ�� �����ڵ�� �����մϴ�." << "\n\n";
	bool isRun = true;
	while (isRun)
	{
		std::cout << "=========ȣ��Ʈ �޼���=========" << "\n";
		std::cout << "======= ���� ���� : 2�� =======" << "\n";
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
			std::cout << "������ ��Ĩ�ϴ�." << "\n";
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