// LabWork_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

// Расчет площади сложной фигуры (метод декомпозиции)

int TotalArea(int, int, int, int);
int Square(int, int, int, int, int);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
	cout << "Расчет площади многоугольника.\n";
    int n, x1, x2, y1, y2, x, y;
    double sum = 0;
    cout << "Введите кол-во углов многоугольника: ";
    cin >> n;
    cout << "Введите координаты (x;y) вершины многоугольника: \n";
    cin >> x >> y;
    x1 = x;
    y1 = y;
    for (int i = 0; i < (n - 1); i++)
    {
        cout << "Введите координаты (x;y) следующей вершины: \n";
        cin >> x2 >> y2;
        sum += (x1 + x2) * (y2 - y1);
        x1 = x2;
        y1 = y2;
    }
    int Square = sum + TotalArea(x, x1, y, y2);
    cout << "Площадь " << n << "- угольника = " << abs(Square) / 2 << "кв.ед." << endl;
    
    return 0;
}

int TotalArea(int x, int x2, int y, int y2)
{
    return (x + x2) * (y - y2);
}

int Square(int sum, int x, int x1, int y, int y2)
{
    return sum + TotalArea(x, x1, y, y2);
}

// Расчет кубического корня

int CubRoot(double);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Расчет кубического корня.\n";

    double n;
    cout << "Введите число: ";
    cin >> n;

    cout << "Прямое вычисление: " << pow(n, 1. / 3) << endl;
    cout << "Через итерацию: " << CubRoot(n) << endl;

    return 0;
}

int CubRoot(double n)
{
    double xi = 0;
    double xi1 = n/3;
    
    while (xi != xi1)
    {
        xi = xi1;
        xi1 = (1. / 3) * (n / (xi1 * xi1) + (2 * xi1));
    }
    
    return xi;
}


// Площадь треугольников

double EquilateralTriangle(double);
double VersatileTriangle(double, double, double);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Расчет площади треуголиков: равностороннего и разностороннего.\n";

    double a, b, c;
    cout << "Введи длину стороны РАВНОСТОРОННЕГО треугольника: \n";
    cin >> a;
    cout << "Площадь РАВНОСТОРОННЕГО треугольника со стороной " << a << " = " << EquilateralTriangle(a) << endl;

    cout << "Введи длины сторон РАЗНОСТОРОННЕГО треугольника: \n";
    cin >> a >> b >> c;
    cout << "Площадь РАВНОСТОРОННЕГО треугольника со стороной " << a << " = " << VersatileTriangle(a, b, c) << endl;
    
}

double EquilateralTriangle(double a)
{
    double h, s;
    h = (a * sqrt(3)) / 2;

    return s = .5 * a * h;
}

double VersatileTriangle(double a, double b, double c)
{
    double p, s;
    p = (a + b + c) / 2;

    return s = sqrt(p * (p - a) * (p - b) * (p - c));
}


// Рекурсия суммы ряда

int Func(int);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;

    cout << "Рекурсивная функция суммы ряда S = 5 + 10 + 15 + ... + 5 * n, при n > 0.\n";
    cout << "Введи число повторов: \n";
    cin >> n;
    if (n > 0)
        cout << "Сумма ряда: " << Func(n) << endl;
    
    else
        cout << "Не удовлетворяет условию n > 0.";
}

int Func(int n)
{
    if (n == 1)
        return 5;
    else
        return (5 * n + Func(n - 1));
}


// Перевод целого числа в двоичный код

void BinaryNum(int);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;

    cout << "Перевод целого числа в двоичный код.\n";
    cout << "Введи число: \n";
    cin >> n;
    BinaryNum(n);
    
}

void BinaryNum(int n)
{
    if (n < 0) {
        cout << "Упс...отрицательное значение.";
    }
    else if (n < 2) {
        cout << n;
    }
    else {
        BinaryNum(n / 2);
        int result = n % 2;
        cout << result;
    }
}