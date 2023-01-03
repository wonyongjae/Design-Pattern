#pragma once
#include <string>
using namespace std;
class Singleton
{
private:
	// 멤버 변수
	string name, company;
	// 클래스의 인스턴스로 가리킬 정적 포인터
	static Singleton* instance;
	// 기본 생성자
	Singleton() {}
	// #1
	// Singleton(const Singleton*) {}
	// Singleton& operator = (const Singleton&) {}
	~Singleton() {}

public:
	// #2
	// 복사 생성자 삭제
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	// 객체 생성 = getInstance
	static Singleton* getInstance()
	{
		// instance가 가리키는 객체가 없으면 new, 있으면 해당 instance 반환
		return instance = instance == NULL ? new Singleton() : instance;
	}
	void setValues(string name, string company)
	{
		this->name = name;
		this->company = company;
	}
	void print()
	{
		cout << name << "'s company is " << company << "." << endl;
	}
};
// instancePtr -> nullptr 초기화
Singleton* Singleton::instance = nullptr;