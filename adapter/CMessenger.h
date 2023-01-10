#pragma once
#include <iostream>
#include <string>

class CMessenger
{
public:
	CMessenger() {}
	~CMessenger() {}


	std::string sendMessege();
	std::string encoder(std::string arg_str);
	void getMessege(std::string arg_str);
};