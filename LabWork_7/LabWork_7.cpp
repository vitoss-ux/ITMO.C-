// LabWork_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
// структура Time

struct Time 
{
	int hours, minutes, seconds;

	int timeToSec(const Time& t) // перевод в секунды
	{
		return t.hours * 3600 + t.minutes * 60 + t.seconds;
	}

	void dispRes() // вывод времени
	{
		cout << "Часы: " << hours << " Минуты: " << minutes << " Секунды: " << seconds << endl;
	}

	Time addition(Time& a, Time& b) // сложение времени
	{
		Time sTime{};
		int sumSec = timeToSec(a) + timeToSec(b);
		sTime.hours = sumSec / 3600;
		sumSec = sumSec % 3600;
		sTime.minutes = sumSec / 60;
		sTime.seconds = sumSec % 60;
		return sTime;
	}

	Time subtraction(Time& a, Time& b) // вычитание времени
	{
		Time dTime{};
		int sumSec = abs(timeToSec(a) - timeToSec(b));
		dTime.hours = sumSec / 3600;
		sumSec = sumSec % 3600;
		dTime.minutes = sumSec / 60;
		dTime.seconds = sumSec % 60;
		return dTime;
	}

};

Time InputData() // функция запроса и ввода времени у пользователя
{
	Time t{};
	cout << "Введите время в формате чч:мм:сс..." << endl;
	cin >> t.hours >> t.minutes >> t.seconds;

	if ((t.hours > 23 || t.hours < 0) || ((t.minutes > 59 || t.minutes < 0)) || ((t.seconds > 59 || t.seconds < 0)))
	{
		cin.clear();
		cout << "Ошибка формата." << endl;
	}
	
	return t;
}

Time InputData();

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Time a = InputData(); // первый запрос времени
	cout << "Перевод в секунды_1: " << a.timeToSec(a) << endl;
	Time b = InputData(); // второй запрос времени
	cout << "Перевод в секунды_2: " << b.timeToSec(b) << endl;
	Time c = c.addition(a, b);
	cout << "Сумма: ";
	c.dispRes();
	Time d = d.subtraction(a, b);
	cout << "Разность: ";
	d.dispRes();
}

// Решение квадратного уравнения

struct QuadEq {
	double x1, x2;
};

QuadEq MyRoot(double a, double b, double c) {
	
	QuadEq qe{};

	double discr = pow(b, 2) - 4 * a * c;

	if (discr > 0) {
		qe.x1 = -b + sqrt(discr) / 2 * a;
		qe.x2 = -b - sqrt(discr) / 2 * a;
		return qe;
	}

	if (discr == 0) {
		qe.x1 = qe.x2 = -b / 2 * a;
		return qe;
	}

	if (discr < 0) {
		return qe;
	}
}

void PrintRes(QuadEq qe) {

	if (qe.x1 != qe.x2) {
		cout << "D > 0. Уравнение имеет 2 корня.\n" << "X1 = " << qe.x1 << "; X2 = " << qe.x2 << endl;
	}
	if (qe.x1 = qe.x2) {
		cout << "D = 0. Уравнение имеет 1 корень.\n" << "X = " << qe.x1 << endl;
	}
	else	
		cout << "D < 0. Корней нет.\n" << endl;
}

int main() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, b, c;
	cout << "Введи коэффициенты уравнения:\n" << endl;
	cin >> a >> b >> c;
	
	PrintRes(MyRoot(a, b, c));
}