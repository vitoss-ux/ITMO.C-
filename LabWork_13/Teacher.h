#pragma once
#include "includes.h"

class teacher : public Person {
public:
	void setData()
	{
		Person::setData();
		cout << "Количество учебных часов: ";
		cin >> work_time;
	}

	void getData()
	{
		Person::getData();
		cout << "Всего учебных часов: " << this->work_time << endl;
	}

private:
	unsigned int work_time;
};