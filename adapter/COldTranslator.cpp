#include "pch.h"
#include "COldTranslator.h"

std::string COldTranslator::decoder(std::string arg_str)
{
	std::string str_temp = arg_str;

	char* chars = new char[str_temp.length() + 1];
	str_temp.copy(chars, str_temp.length() + 1);
	chars[str_temp.length()] = '\0';

	for (int ii = 0; ii < str_temp.length() + 1; ii++)
	{
		chars[ii] -= 100;
	}

	std::string ret_recover_str = std::string(chars);

	return ret_recover_str;
};

