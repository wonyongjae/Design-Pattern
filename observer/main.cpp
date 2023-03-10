#include "pch.h"
#include <iostream>
#include "CProvider.h"
#include "CListener.h"

int main()
{
	CProvider *provider = new CProvider();

	CListener *listener_a = new CListener(*provider);
	listener_a->registMe();
	CListener *listener_b = new CListener(*provider);
	listener_b->registMe();
	CListener *listener_c = new CListener(*provider);
	provider->registObserver(listener_c);

	provider->sendMessege();
	provider->showLog();

	provider->removeObserver(listener_a);
	listener_c->removeMe();

	delete listener_a;
	delete listener_b;
	delete listener_c;
	delete provider;


	return 0;
}