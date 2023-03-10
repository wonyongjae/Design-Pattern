#include "pch.h"
#include <iostream>
#include <vector>
#include "CArmy.h"
#include "CAirForce.h"
#include "CNavy.h"
#include "CCommander.h"
#include "CDriver.h"

int main()
{

	CEngineer* ptr_engineer;
	CPilot* ptr_Pilot;
	CSoldierFactory* factory;

	std::cout << "==================육군===================" << "\n";

	factory = new CArmy();

	ptr_engineer = factory->createEngineer();
	ptr_engineer->maintenance();
	ptr_engineer->repair();

	ptr_Pilot = factory->createPilot();
	ptr_Pilot->driveing();
	ptr_Pilot->fire();

	delete ptr_engineer;
	delete ptr_Pilot;
	delete factory;


	std::cout << "==================공군===================" << "\n";

	factory = new CAirForce();

	ptr_engineer = factory->createEngineer();
	ptr_engineer->maintenance();
	ptr_engineer->repair();

	ptr_Pilot = factory->createPilot();
	ptr_Pilot->driveing();
	ptr_Pilot->fire();

	delete ptr_engineer;
	delete ptr_Pilot;
	delete factory;

	std::cout << "==================해군===================" << "\n";

	factory = new CNavy();

	ptr_engineer = factory->createEngineer();
	ptr_engineer->maintenance();
	ptr_engineer->repair();

	ptr_Pilot = factory->createPilot();
	ptr_Pilot->driveing();
	ptr_Pilot->fire();

	delete ptr_engineer;
	delete ptr_Pilot;
	delete factory;


	std::cout << "==========================================" << "\n";

	std::vector<CSoldier*> ptr_sList;
	std::vector<CSoldier*>::iterator sIter;

	CSoldierFactory* ptr_armyFactory = new CArmy();
	CSoldierFactory* ptr_airforceFactory = new CAirForce();
	CSoldierFactory* ptr_navyFactory = new CNavy;

	/*
	ptr_sList.push_back(ptr_armyFactory->createPilot());
	ptr_sList.push_back(ptr_armyFactory->createEngineer());

	ptr_sList.push_back(ptr_airforceFactory->createPilot());
	ptr_sList.push_back(ptr_airforceFactory->createEngineer());

	ptr_sList.push_back(ptr_navyFactory->createPilot());
	ptr_sList.push_back(ptr_navyFactory->createEngineer());

	for (sIter = ptr_sList.begin(); sIter != ptr_sList.end(); ++sIter)
	{
		std::cout << *sIter << "\n";
	}
	*/
	std::cout << "==========================================" << "\n";

	std::vector<CPilot*> pilotList;

	pilotList.push_back(ptr_armyFactory->createPilot());
	pilotList.push_back(ptr_airforceFactory->createPilot());
	pilotList.push_back(ptr_navyFactory->createPilot());

	CCommander* g_commander = CCommander::getCommander();
	g_commander->setPilots(pilotList);
	g_commander->fire();


	std::cout << "==========================================" << "\n";

	std::vector<CSoldier*> soldierList;

	CDriver* truckDriver = new CDriver();
	truckDriver->setTruck(soldierList);

	ptr_engineer = ptr_armyFactory->createEngineer();
	ptr_Pilot = ptr_armyFactory->createPilot();;

	truckDriver->load(ptr_engineer);
	truckDriver->load(ptr_Pilot);

	truckDriver->drop(ptr_engineer);


	return 0;
}
