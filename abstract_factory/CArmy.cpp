#include "pch.h"
#include "CArmy.h"

CPilot* CArmy::createPilot()
{
	CPilot* ret_ptr_tankPilot = new CTankPilot();
	return ret_ptr_tankPilot;
}

CEngineer* CArmy::createEngineer()
{
	CEngineer* ret_ptr_tankEngineer= new CTankEngineer();
	return ret_ptr_tankEngineer;
}
CDriver* CArmy::createDriver() 
{
	CDriver* ret_ptr_driver = new CDriver();
	return ret_ptr_driver;
}