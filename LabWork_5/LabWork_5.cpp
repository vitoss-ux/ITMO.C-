// LabWork_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;


// Передача массива в функцию

void ArrayData(int, int[]);
void ArraySorter(int, int[]);

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++) {
		cout << "mas[" << i << "] = ";
		cin >> mas[i]; // заполняем массив из 10 эл-тов с клавиатуры
	}

	ArrayData(n, mas);
	ArraySorter(n, mas);
}

void ArrayData(int n, int mas[]) {
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i]; // сумма всех эл-тов массива
	}
	cout << "Сумма элементов массива: " << sum << endl;

	int average = sum / n;
	cout << "Среднее значение элементов массива: " << average << endl;

	int even = 0;
	int odd = 0; // счетчик индекса четный/не четный
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			even += mas[i]; // складываем четные индексы
		else
			odd += mas[i];
	}
	cout << "Сумма элементов массива с НЕ четным индексом: " << odd << endl;
	cout << "Сумма элементов массива с четным индексом: " << even << endl;

	int max = mas[0]; // счетчики для элементов массива и индекса
	int min = mas[0];
	int maxInd = 0;
	int minInd = 0;

	for (int i = 0; i < n; i++) {
		if (max < mas[i])
			max = mas[i];
		if (min > mas[i])
			min = mas[i];
		if (mas[i] > mas[maxInd])
			maxInd = i;
		if (mas[i] < mas[minInd])
			minInd = i;
	}
	cout << "Максимальный элемент: " << max << " Индекс: " << maxInd << endl;
	cout << "Минимальный элемент: " << min << " Индекс: " << minInd << endl;

	int c = 1;
	for (int i = min(maxInd, minInd) + 1; i < max(maxInd, minInd); i++) {
		c *= mas[i];
	}
	cout << "Произведение элементов между максимальным и минимальным: " << c << endl;
}

void ArraySorter(int N, int mas[]) {
	
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
	
	cout << "Отсортированный массив: ";
	for (int i = 0; i < N; i++)
		cout << mas[i] << "|";
}

// возврат массива из функцию

int* max_vect(int, int[], int[]);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a[] = {1, 2, 3, 4, 5, 6, 7, 2};
	int b[] = {7, 6, 5, 4, 3, 2, 1, 3};

	int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива 
	int* c; //Указатель на результирующий массив 
	c = max_vect(kc, a, b); //вызов функции для создания массива 

	for (int i = 0; i < kc; i++) //Вывод результата. 
		cout << c[i] << " ";
	cout << endl;
	delete[]c;
}

int* max_vect(int kc, int a[], int b[])
{
	int* c = new int[kc];
	for (int i = 0; i < kc; i++)
	{
		c[i] = max(a[i], b[i]);
	}
	return c;
}