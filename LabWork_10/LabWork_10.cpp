// LabWork_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Dot.h"
#include "Triangle.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // агрегация
    double x, y;
    cout << "Введите координаты вершин треугольника: " << endl;
    cout << "Вершина a (x,y) = ";
    cin >> x >> y;
    Dot* a = new Dot(x, y);
    cout << "Вершина b (x,y) = ";
    cin >> x >> y;
    Dot* b = new Dot(x, y);
    cout << "Вершина c (x,y) = ";
    cin >> x >> y;
    Dot* c = new Dot(x, y);
    Triangle* t = new Triangle(a, b, c);
    t->ShowSides();
    cout << "Периметр = " << t->Perimeter() << endl;
    cout << "Площадь = " << t->Square() << endl;

    // композиция
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершин треугольника: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle* t2 = new Triangle(x1, y1, x2, y2, x3, y3);
    t->ShowSides();
    cout << "Периметр = " << t->Perimeter() << endl;
    cout << "Площадь = " << t->Square() << endl;
}
