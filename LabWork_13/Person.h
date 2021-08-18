#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	virtual void setData()
	{
		cout << "Имя: " << "\n";
		cin >> name;
		cout << "Фамилия: " << "\n";
		cin >> surname;
		cout << "Отчество: " << "\n";
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