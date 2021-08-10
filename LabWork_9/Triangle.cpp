#include "Triangle.h"
#include <math.h>
#include <iostream>

using namespace std;

class SideError
{
public:
	SideError() : message("ньхайю!!!") {}
	void printMessage() const { cout << message << endl; }
private:
	string message;
};

class Triangle
{
public:

	Triangle(int aSide, int bSide, int cSide) {
		a = aSide;
		b = bSide;
		c = cSide;
		if ((a + b < c) && (b + c < a) && (a + c < b))
			throw SideError();
	}

	void Square() {
		int p = (a + b + c) / 2;
		cout << sqrt(p * (p - a) * (p - b) * (p - c));
	}

private:
	int a, b, c;
};
