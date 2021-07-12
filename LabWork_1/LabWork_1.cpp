// LabWork_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    // Упражнение 1:
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "упражнение 1:";
    std::cout << "hello world!\n";
    string name;
    cout << "what is your name?";
    getline(cin, name);
    cout << "hello," << name << "!\n";

    // Упражнение 2:
    cout << "упражнение 2:";
    string name2;
    cout << "введите свое имя: ";
    double x;
    double a, b;
    cout << "\n введите a и b: \n";
    cin >> a;
    cin >> name2;
    cin >> b;
    cout.precision(3);
    cout << sizeof(a / b) << ends << sizeof(x) << endl;
    x = a / b;
    cout << "\n x = " << x << endl;
    cout << "привет," << name2 << "!\n";
    return 0;

    // Упражнение 3:
    cout << "Упражнение 3.Расчет площади треугольника.:";
    cout << "ВВедите значение периметра P: ";
    double p, s;
    cin >> p;
    double k, j, i;
    cout << "ВВедите длину сторон  А, Б, В: ";
    cin >> k;
    cin >> j;
    cin >> i;
    s = sqrt(p * (p - k) * (p - j) * (p - i));
    cout << "Площадь треугольника: " << s << endl;
    return 0;

    //  Расчет площади многоугольника 
    cout << "Расчет площади многоугольника.";
    int n, x1, x2, y1, y2, x, y;
    double sum = 0;
    cout << "Введите кол-во углов многоугольника: ";
    cin >> n;
    cout << "Введите координаты (x;y) вершины многоугольника: ";
    cin >> x >> y;
    x1 = x;
    y1 = y;
    for (int i = 0; i < (n - 1); i++)
    {
        cout << "Введите координаты (x;y) следующей вершины: ";
        cin >> x2 >> y2;
        sum += (x1 + x2) * (y2 - y1);
        x1 = x2;
        y1 = y2;
    }
    sum = sum + (x + x2) * (y - y2);
    cout << "Площадь " << n << " - угольника = ";
    cout << fixed << cout.precision(3) << abs(sum) / 2 << endl;
    return 0;
}