#include "pch.h"
#include "CNewTranslator.h"


std::string CNewTranslator::decoder(std::string arg_str)
{
	std::string ret_str = arg_str;
	std::reverse(ret_str.begin(), ret_str.end());
	ret_str = this->m_old_translator->decoder(ret_str);
	ret_str = ret_str + "end";
	return ret_str;
};