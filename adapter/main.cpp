#include "pch.h"
#include <iostream>
#include <string>
#include "CMessenger.h"
#include "COldTranslator.h"
#include "CNewTranslator.h"
#include "CTranslate.h"

int main()
{
	CMessenger* ptr_messengerA = new CMessenger;
	std::string messenger_msg = ptr_messengerA->sendMessege();

	std::cout << "\n" << "\n";

	CMessenger* ptr_messengerB = new CMessenger;
	std::cout << "번역기 사용하기 전" << "\n";
	ptr_messengerB->getMessege(messenger_msg);

	std::cout << "\n" << "\n";

	CTranslate* ptr_translator = new CNewTranslator(new COldTranslator());
	std::cout << "최신 번역기 사용한 후" << "\n";
	ptr_messengerB->getMessege(ptr_translator->decoder(messenger_msg));
	std::cout << "\n" << "\n";

	delete ptr_messengerA;
	delete ptr_messengerB;
	delete ptr_translator;

	return 0;

}

