#pragma once
#include "CTranslate.h"

class COldTranslator : public CTranslate
{
public:
	COldTranslator() {}
	virtual ~COldTranslator() {}

	virtual std::string decoder(std::string arg_str);
};