// LabWork_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <map>

using namespace std;

struct Grade
{
	string name;
	char value;
};


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Grade student;
	map<string, char> studentsMap;
	map<string, char>::iterator it;

	int n;
	cout << "Введите количество студентов в группе: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Имя студента: ";
		cin >> student.name;
		student.value = 0;
		studentsMap.insert(make_pair(student.name, student.value));
	}

	string searchName;
	char input;
	do
	{
		cout << "Имя студента для присвоения оценки: ";
		cin >> searchName;

		it = studentsMap.find(searchName);
		if (it == studentsMap.end()) {
			cout << "Студент не найден." << endl;
		}
		else
		{
			char grade;
			cout << "Оценка: ";
			cin >> grade;
			it->second = grade;
		}

		cout << endl;
		cout << "Продолжить? (д / н) ";
		cin >> input;
		if (input == 'д')
			continue;
	} while (input != 'н');

	it = studentsMap.begin();
	for (int i = 0; it != studentsMap.end(); it++, i++) {
		cout << "Имя: " << it->first << ", Оценка: " << it->second << endl;
	}
}
