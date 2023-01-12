#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "CObserver.h"

class CSubject
{
public:
	CSubject() {}
	virtual ~CSubject() {}

	virtual void registObserver(CObserver *arg_observer) = 0;
	virtual void removeObserver(CObserver *arg_observer) = 0;
	virtual void notify() = 0;
};