// LabWork_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

// запись текста в файл

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    char c;
    cout << "Введите стихотворение." << endl;
    ofstream out("poem.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    while (cin.get(c))
    {
        out << c;
    }
    out.close();
}

//сохранение данных в файл

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int N = 5;
    int mas[5] = {50, 30, 40, 10, 20};

    ofstream out("array.txt");

    if (!out)
    {
        cout << "Файл открыть невозможно" << endl;
        return 1;
    }

    out << "Начальный массив: ";
    for (int i = 0; i < N; i++) // вывод на консоль
    {
        cout << mas[i] << "|";
        out << mas[i];
    }
    
    int min = 0;
    int buf = 0;

    for (int i = 0; i < N; i++) // сортировка массива
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

    out << "\nОтсортированный массив: ";
    for (int i = 0; i < N; i++)
    {
        cout << mas[i] << "|";
        out << mas[i];
    }

    out.close();
    return 0;
}
