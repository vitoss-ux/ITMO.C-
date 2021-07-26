// LabWork_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <math.h>

using namespace std;

// Решение квадратного уравнения

int Myroot(double, double, double, double&, double&);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	Myroot(a, b, c, x1, x2);
	return 0;
}

int Myroot(double a, double b, double c, double &x1, double &x2) 
{
	double discr = pow(b, 2) - 4 * a * c;

	if (discr > 0) {
		x1 = -b + sqrt(discr) / 2 * a;
		x2 = -b - sqrt(discr) / 2 * a;
		cout << "D > 0. Уравнение имеет 2 корня.\n" << "X1 = " << x1 << "; X2 = " << x2 << endl;
		return 1;
	}

	if (discr == 0) {
		x1 = x2 = -b / 2 * a;
		cout << "D = 0. Уравнение имеет 1 корень.\n" << "X = " << x1 << endl;
		return 0;
	}

	if (discr < 0) {
		cout << "D < 0. Корней нет.\n" << endl;
		return -1;
	}
}


//  Реализация ввода данных

bool Input(int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b;
	cout << "Введи 2 числа и проверь являеются ли они натуральными...\n";
	cin >> a >> b;

	if (Input(a, b) == false) // if(!Input(a,b)) 
	{
		cerr << "Ошибка. Не натуральное число.";
		return 1;
	}
	int s = a + b;
	cout << s;
	return 0;
}

bool Input(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 0)
		return false;
	else
		return true;
}