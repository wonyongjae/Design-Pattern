#include "pch.h"
#include "CMessenger.h"

std::string CMessenger::sendMessege()
{
	std::string m_speak;
	std::cout << "�����ϰ� ���� �޽����� �Է��ϼ���.(English only)" << "\n";
	std::getline(std::cin, m_speak);
	std::string ret_speak = encoder(m_speak);
	return ret_speak;
};
std::string CMessenger::encoder(std::string arg_str)
{
	std::string str_temp = arg_str;
	char* chars = new char[str_temp.length() + 1];
	str_temp.copy(chars, str_temp.length() + 1);
	chars[str_temp.length()] = '\0';

	for (int ii = 0; ii < str_temp.length() + 1; ii++)
	{
		chars[ii] += 100;
	}

	std::string ret_reverse_str = std::string(chars);
	std::reverse(ret_reverse_str.begin(), ret_reverse_str.end());

	return ret_reverse_str;
};
void CMessenger::getMessege(std::string arg_str)
{
	std::cout << "���޹��� �޽����� ������ �����ϴ�." << "\n";
	std::cout << "========================================" << "\n";
	std::cout << arg_str << "\n";
	std::cout << "========================================" << "\n";

	std::string str_temp = arg_str;
	str_temp.front() > 100 ? std::cout << "�˾ƺ� �� ���� �޽����Դϴ�." << "\n" : std::cout << "�޽����� �� ���޹޾ҽ��ϴ�.";

	/*
	char* chars = new char[str_temp.length() + 1];
	str_temp.copy(chars, str_temp.length() + 1);
	chars[0] < 100 ? std::cout << "�˾ƺ� �� ���� �޽����Դϴ�." << "\n" : std::cout << "�޽����� �� ���޹޾ҽ��ϴ�.";
	*/
}