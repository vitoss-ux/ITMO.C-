// LabWork_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Практическое занятие 2. Реализация управляющих операторов.

#include <iostream>
#include <Windows.h>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Упражнение 1.
    // Задание 1.
    std::cout << "Задание 1: \n";
    double x, y;
    std::cout << "Введите координаты x и y: \n";
    cin >> x;
    cin >> y;

    if (x * x + y * y < 9 && y > 0)
        cout << "Точка внутри" << endl;
    else if (x * x + y * y > 9 || y < 0)
        cout << "Точка снаружи" << endl;
    else
        cout << "Точка на границе" << endl;
    return 0;

    // Задание 2.
    char op;
    cout << "Сделай свой выбор, собери авто свой мечты:\n";
    cout << "s - аскетичный мощный авто\n";
    cout << "v - спокойствие, уверенность и комфорт\n";
    cin >> op;

    switch (op)
        {
        case 's':
            cout << "Радио играть должно\n";
            cout << "Колеса круглые\n";
            cout << "Мощный двигатель\n";
            break;
        case 'v':
            cout << "Кондиционер хочу\n";
            cout << "Радио играть должно\n";
            cout << "Колеса круглые\n";
            cout << "Мощный двигатель\n";
            break;
        default:
            cout << "Колеса круглые\n";
            cout << "Стандартный двигатель\n";
        }

    // Упражнение 2.
    // Задание 1.
    double x, x1, x2, y;

    cout << "задайте границы интервала x1 и x2:\n";
    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;

    cout << "\tx\tsin(x)\n"; //таблица значений
    x = x1;
    do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } while (x <= x2);
    return 0;
    
    //// Задание 2.
    int a, b, temp;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    while (a != b)
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
    cout << "НОД = " << a << endl;
    
    // Задание 3.
    double x, x1, x2, y;
    cout << "задайте границы интервала x1 и x2:\n";
    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;

    cout << "\tx\tsin(x)\n"; //таблица значений

    x = x1;
    while (x <= x2)
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x += 0.01;
    }
    cout << "done!\n";

    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    do 
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    } while (a != b);
    cout << "НОД = " << a << endl;

    return 0;

    // Упражнение 3.
    // Задание 1.
    srand(time(NULL));
    int a, b, c;
    int k = 0, n = 10;
    for (int i = 1; i <= n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = " << a * b << endl;
        cin >> c;

        if (a *b != c)
        {
            k++;
            cout << "Error!";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    cout << "Count error..." << k << endl;
    return 0;

    // Упражнение 4.
    int s, m;

    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    
    // Определение високосного года
    cout << "Определение високосного года. \nВведи год...\n";
    int year;
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " - високосный год!" << endl;
    }
    else
        cout << year << " - НЕ високосный год!" << endl;

    // Определение наибольшего из трез чисел
    cout << "Наибольшее из трех чисел.\nВведите три числа...\n";
    int a, b, c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a > b && a > c) {
        cout << a << " - наибольшее из чисел." << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " - наибольшее из чисел." << endl;
    }
    else
        cout << c << " - наибольшее из чисел." << endl;

    // Размен монет
    cout << "Размен монет\n";
    int mas[10] = { 1, 2, 5, 10, 50, 100, 200, 500, 1000, 5000 }, x, temp, i = 7;
    cout << "Введи число для размена:\n";
    cin >> x;
    while (x > 0)
    {
        if (x >= mas[i])
        {
            temp = 0;
            while (x >= mas[i])
            {
                temp++;
                x -= mas[i];
            }
            cout << "Купюра " << mas[i] << " " << temp << " штук" << endl;
        }
        i--;
    }
    return 0;
    
    // Стрельба по мишени
    cout << "Стрельба по мишени\n";
    int r = 10; //радиус мишени
    int x, y, shot, points = 0;
    cout << "Количесво выстрелов:\n";
    cin >> shot;

    while (points < 100)
    {
        for (int i = 1; i <= shot; i++)
        {
            cout << "Выстрел по x" << i << " = ";
            cin >> x;
            cout << "Выстрел по y" << i << " = ";
            cin >> y;

            if ((x <= 1 && x >= -1) && (y <= 1 && y >= -1))
            {
                std::cout << "Попадание в центр! \n";
                points += 50;
            }
            else if ((x <= 5 && x >= -5) && (y <= 5 && y >= -5))
            {
                std::cout << "Попадание \n";
                points += 20;
            }
            else if ((x <= 6 && x >= -6) && (y <= 6 && y >= -6))
            {
                std::cout << "Попадание \n";
                points += 10;
            }
            else if ((x > 10 || x < -10) || (y > 10 || y < -10))
            {
                std::cout << "Промах! \n";
                points += 0;
            }
        }

        int total = points;
        cout << "Сумма очков: " << total << endl;
        if (total >= 100)
            cout << "Exellent shooting!\n";
        else if (total > 60 && total < 100)
            cout << "Pretty well\n";
        else if (total > 20 && total < 60)
            cout << "Need more practice...\n";
        else
            cout << "Blind shooter\n";
    }
    return 0;
}

