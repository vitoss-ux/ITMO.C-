// LabWork_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void set_time()
    {
        // новый объект типа Time
        cout << "Час: ";
        cin >> hours;
        cout << "Минута: ";
        cin >> minutes;
        cout << "Секунда: ";
        cin >> seconds;
        while (seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }
        while (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
    }

    void ShowTime()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }

    Time operator+ (const Time&) const;
    Time operator- (const Time&) const;
    Time operator+ (const float&) const;
    friend Time operator+ (const float, const Time&);
    friend bool operator> (const Time&, const Time&);
    friend bool operator< (const Time&, const Time&);
    friend bool operator>= (const Time&, const Time&);
    friend bool operator<= (const Time&, const Time&);
    friend bool operator== (const Time&, const Time&);
};

Time Time::operator+ (const Time& t) const
{
    int h = hours + t.hours;
    int m = minutes + t.minutes;
    int s = seconds + t.seconds;
    if (s >= 60)
    {
        s -= 60;
        m++;
    }
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    return Time(h, m, s);
}
Time Time::operator+ (const float& t) const
{
    int h = hours;
    int m = minutes;
    int s = seconds + ceil(t * 60);
    while (s >= 60)
    {
        s -= 60;
        m++;
    }
    while (m >= 60)
    {
        m -= 60;
        h++;
    }
    return Time(h, m, s);
}
Time operator+ (float value, const Time& t)
{
    int h = t.hours;
    int m = t.minutes;
    int s = t.seconds + ceil(value * 60);
    while (s >= 60)
    {
        s -= 60;
        m++;
    }
    while (m >= 60)
    {
        m -= 60;
        h++;
    }
    return Time(h, m, s);
}

bool operator> (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) > (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

bool operator< (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) < (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

bool operator>= (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) >= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

bool operator<= (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) <= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

bool operator== (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) == (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

Time Time::operator- (const Time& t) const
{
    int h = 0;
    int m = 0;
    int s = abs((hours * 3600 + minutes * 60 + seconds) - (t.hours * 3600 + t.minutes * 60 + t.seconds));
    while (s >= 60)
    {
        s -= 60;
        m++;
    }
    while (m >= 60)
    {
        m -= 60;
        h++;
    }
    return Time(h, m, s);
}

//сортировка точек в векторе
class Point
{
private:
    double x;
    double y;
public:
    Point(double px, double py) : x(px), y(py) { }

    double get_distance()
    {
        return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
    }
    friend ostream& operator << (ostream& out, Point& a);
};

ostream& operator<< (ostream& out, Point& a)
{
    out << "Точка (" << a.x << ", " << a.y << ") = " << a.get_distance();
    return out;
}

bool operator< (Point& a, Point& b)
{
    return a.get_distance() < b.get_distance();
}


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    Time t1, t2, t3;
    t1.set_time();
    t2.set_time();
    cout << "\nВремя 1: ";
    t1.ShowTime();
    cout << "\nВремя 2: ";
    t2.ShowTime();
    cout << endl;
    t3 = t1 + t2;
    cout << "\nСумма: ";
    t3.ShowTime();
    t3 = t1 - t2;
    cout << "\nРазность: ";
    t3.ShowTime();

    // вещественный тип
    cout << "\nВведи переменную с плавающей точкой: ";
    float a;
    cin >> a;
    t3 = t1 + a;
    t1.ShowTime();
    cout << " + " << a << " = ";
    t3.ShowTime();

    t3 = a + t1;
    cout << a << " + ";
    t1.ShowTime();
    cout << " = ";
    t3.ShowTime();

    cout << "\nСравнение объектов Время 1 и Время 2\n";
    t1.ShowTime();
    cout << " > ";
    t2.ShowTime();
    cout << " = ";
    if (t1 > t2) 
        cout << "Да"; 
    else cout << "Нет";

    t1.ShowTime();
    cout << " < ";
    t2.ShowTime();
    cout << " = ";
    if (t1 < t2) 
        cout << "Да"; 
    else cout << "Нет";

    t1.ShowTime();
    cout << " >= ";
    t2.ShowTime();
    cout << " = ";
    if (t1 >= t2) 
        cout << "Да"; 
    else cout << "Нет";

    t1.ShowTime();
    cout << " <= ";
    t2.ShowTime();
    cout << " = ";
    if (t1 <= t2) 
        cout << "Да"; 
    else cout << "Нет";

    t1.ShowTime();
    cout << " == ";
    t2.ShowTime();
    cout << " = ";
    if (t1 == t2) 
        cout << "Да"; 
    else cout << "Нет";

    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    sort(v.begin(), v.end());
    for (auto& point : v)
        cout << point << "\n";
    return 0;
}
