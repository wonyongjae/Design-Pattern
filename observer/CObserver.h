#pragma once
#include <iostream>

class CObserver
{
public:
	CObserver() {}
	virtual ~CObserver() {}

	virtual void listen(const std::string &arg_messege) = 0;
};