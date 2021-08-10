// LabWork_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <math.h>
#include "Triangle.cpp"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b, c;
	cout << "Введите стороны треугольника: " << endl;
	cin >> a >> b >> c;
	try {
		Triangle tr(a, b, c);
		tr.Square();

	}
	catch(SideError& ex){
		ex.printMessage();
		return 1;
	}
}
