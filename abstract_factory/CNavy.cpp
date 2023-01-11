#include "pch.h"
#include "CNavy.h"

CPilot* CNavy::createPilot() 
{
	CPilot* ret_ptr_submarinePilot = new CSubmarinePilot();
	return ret_ptr_submarinePilot;
}

CEngineer* CNavy::createEngineer() 
{
	CEngineer* ret_ptr_submarineEngineer = new CSubmarineEngineer();
	return ret_ptr_submarineEngineer;
}