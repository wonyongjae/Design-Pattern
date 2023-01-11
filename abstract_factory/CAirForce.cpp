#include "pch.h"
#include "CAirForce.h"

CPilot* CAirForce::createPilot() 
{
	CPilot* ret_ptr_jetPilot = new CJetPilot();
	return ret_ptr_jetPilot;
}

CEngineer* CAirForce::createEngineer() 
{
	CEngineer* ret_ptr_jetEngineer = new CJetEngineer();
	return ret_ptr_jetEngineer;
}