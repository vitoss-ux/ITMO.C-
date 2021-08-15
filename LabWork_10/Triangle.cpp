#include "Triangle.h"
#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(Dot* side_a, Dot* side_b, Dot* side_c)
{
	this->a = side_a;
	this->b = side_b;
	this->c = side_c;
}
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	a = new Dot(x1, y1);
	b = new Dot(x2, y2);
	c = new Dot(x3, y3);
}
void Triangle::ShowSides()
{
	cout << "Сторона A: " << a->distanceTo(*b) << endl;
	cout << "Сторона B: " << b->distanceTo(*c) << endl;
	cout << "Сторона C: " << c->distanceTo(*a) << endl;
}
double Triangle::Perimeter()
{
	return a->distanceTo(*b) + b->distanceTo(*c) + c->distanceTo(*a);
}
double Triangle::Square()
{
	double semiPerimeter = this->Perimeter();
	double side1 = a->distanceTo(*b);
	double side2 = b->distanceTo(*c);
	double side3 = c->distanceTo(*a);

	return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
}
