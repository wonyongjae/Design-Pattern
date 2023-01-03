#pragma once
#include <string>
using namespace std;
template <typename T>
class Singleton
{
protected:
	Singleton() {}
	virtual ~Singleton() {}

private:
	string name, company;
	static T* instance;

public:
	// Singleton(const Singleton& v) = delete;
	// void operator=(const Singleton& v) = delete;

	static T* getInstance()
	{
		// static T* instance;
		// return instance;
		return instance = instance == NULL ? new T() : instance;
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
	void m_print(T* t) 
	{
		cout << "Address of m_Obj : " << t << endl;
	}
};
template <typename T>
T* Singleton<T>::instance = NULL;


