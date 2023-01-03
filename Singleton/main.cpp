#include "pch.h"
#include <iostream>
//#include "basic.h"
#include "template.h"
class Yong : public Singleton<Yong> 
{
};

int main()
{	
	// basic
	/*
	Singleton* first_wyj = Singleton::getInstance();
	first_wyj->setValues("Yongjae", "Human_C&C");
	first_wyj->print();
	cout << "Address of m_Obj : " << first_wyj << endl;

	Singleton* second_wyj = Singleton::getInstance();
	second_wyj->setValues("Yongjae_2", "Human_C&C");
	second_wyj->print();
	cout << "Address of m_Obj : " << second_wyj << endl;
	*/

	// tamplate
	Yong* wyj = Yong::getInstance();
	wyj->setValues("Yongjae", "Human_C&C");
	wyj->print();
	wyj->m_print(wyj);
	Yong* wyj_2 = Yong::getInstance();
	wyj_2->setValues("Yongjae_2", "Human_C&C");
	wyj_2->print();
	wyj_2->m_print(wyj_2);
	
}
