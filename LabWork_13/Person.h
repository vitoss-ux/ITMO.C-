#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	virtual void setData()
	{
		cout << "���: " << "\n";
		cin >> name;
		cout << "�������: " << "\n";
		cin >> surname;
		cout << "��������: " << "\n";
		cin >> lastname;
	}

	virtual void getData()
	{
		cout << name << " " << surname << " " << lastname << endl;
	}

private:
	std::string name;
	std::string surname;
	std::string lastname;
};