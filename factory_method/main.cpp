// factory_method.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "unit.h"

int main()
{
	Barracks barracks;
	Factory factory;

	Unit* pUnit_a = barracks.Create_Unit();
	Unit* pUnit_b = factory.Create_Unit();

	pUnit_a->Print_Info();
	pUnit_b->Print_Info();

}