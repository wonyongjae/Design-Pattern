#pragma once
#include <iostream>
#include <vector>
#include "CSoldier.h"

class CDriver
{
public:
	CDriver() {}
	~CDriver() {}

	std::vector<CSoldier*> m_truck;

	void setTruck(std::vector<CSoldier*> arg_truck);
	void load(CSoldier* arg_soldier);
	void drop(CSoldier* arg_soldier);
};