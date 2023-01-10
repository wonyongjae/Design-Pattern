#pragma once
#include <iostream>
#include <string>
class CTranslate
{
public:
	CTranslate() {}
	virtual ~CTranslate() {}

	virtual std::string decoder(std::string arg_str) = 0;
};