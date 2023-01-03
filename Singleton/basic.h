#pragma once
#include <string>
using namespace std;
class Singleton
{
private:
	// ��� ����
	string name, company;
	// Ŭ������ �ν��Ͻ��� ����ų ���� ������
	static Singleton* instance;
	// �⺻ ������
	Singleton() {}
	// #1
	// Singleton(const Singleton*) {}
	// Singleton& operator = (const Singleton&) {}
	~Singleton() {}

public:
	// #2
	// ���� ������ ����
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	// ��ü ���� = getInstance
	static Singleton* getInstance()
	{
		// instance�� ����Ű�� ��ü�� ������ new, ������ �ش� instance ��ȯ
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
// instancePtr -> nullptr �ʱ�ȭ
Singleton* Singleton::instance = nullptr;