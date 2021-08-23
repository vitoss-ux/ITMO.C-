// LabWork_14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;


template <class Class>

Class avrg(Class arr[], int size)
{
	Class sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int mas[] = { 56, 967, 43, 4, 4, 90, 31, 111, 112 };
	double mas_d[] = { 3.14, 25.234, 3.045, 7.6, 3.43, 0.34 };
	long mas_l[] = { 98585064, 4164778, 124330785, 786676999, 11111111, 909099909976 };
	char mas_c[] = { 'H', 'e', 'l', 'l', 'o', 'A', 'l', 'o', 'h', 'a' };
	int i = sizeof(mas) / sizeof(mas[0]);
	int d = sizeof(mas_d) / sizeof(mas_d[0]);
	int l = sizeof(mas_l) / sizeof(mas_l[0]);
	int c = sizeof(mas_c) / sizeof(mas_c[0]);

	cout << "Среднее значение типа - int: " << avrg(mas, i) << endl;
	cout << "Среднее значение типа - double: " << avrg(mas_d, d) << endl;
	cout << "Среднее значение типа - long: " << avrg(mas_l, l) << endl;
	cout << "Среднее значение - char: " << int(avrg(mas_c, c)) << " " << avrg(mas_c, c) << endl;
}
