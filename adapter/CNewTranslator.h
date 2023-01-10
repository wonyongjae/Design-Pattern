#pragma once
#include "CTranslate.h"
#include "COldTranslator.h"

class CNewTranslator : public CTranslate, public COldTranslator
{
public:
	virtual ~CNewTranslator() 
	{
		if (m_old_translator != nullptr)
		{
			delete m_old_translator;
		}
	}

	COldTranslator* m_old_translator;
	CNewTranslator(COldTranslator* m_old_translator)
	{
		this->m_old_translator = m_old_translator;
	}
	virtual std::string decoder(std::string arg_str);
};