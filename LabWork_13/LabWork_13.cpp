// LabWork_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "includes.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

	Person* Student = new student;
	cout << "Студент:" << "\n";
	Student->setData();
	Student->getData();

	Person* Teacher = new teacher;
	cout << "Преподаватель:" << "\n";
	Teacher->setData();
	Teacher->getData();

	return 0;
}
