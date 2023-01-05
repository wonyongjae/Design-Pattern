#pragma once
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class Unit {
public:
	Unit() {}
	//Unit(const Unit& _rhs) {}
	~Unit() {}
public:
	void Set_Name(const char* _Name)
	{
		name = _Name;
	};
	void Set_Price(int _Price)
	{
		price = _Price;
	};
public:
	void Print_Info()
	{
		cout << "À¯´Ö °¡°Ý : " << price << endl;
		cout << "À¯´Ö ÀÌ¸§ : " << name << endl;
	};
protected:
	int price = 0;
	const char* name = nullptr;
};

// À¯´Ö »ý¼º
class C_Unit
{
public:
	C_Unit() {}
	//C_Unit(const C_Unit& _rhs) {}
	~C_Unit() {}

	Unit* NewUnit()
	{
		Unit* pUnit = Create_Unit();
		return pUnit;
	};
public:
	virtual Unit* Create_Unit() = 0;

};

// Barracks
class Barracks : public C_Unit
{
public:
	Barracks() {}
	//Barracks(const Barracks& _rhs) {}
	~Barracks() {}
public:
	virtual Unit* Create_Unit()
	{
		Unit* pUnit = new Unit();
		pUnit->Set_Name("¸¶¸°");
		pUnit->Set_Price(50);
		return pUnit;
	};
};


// Factory
class Factory : public C_Unit
{
public:
	Factory() {}
	//Factory(const Factory& _rhs) {}
	~Factory() {}
public:
	virtual Unit* Create_Unit()
	{
		Unit* pUnit = new Unit();
		pUnit->Set_Name("ÅÊÅ©");
		pUnit->Set_Price(200);
		return pUnit;
	};
};