#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
using namespace std;

const double PI = 3.1415926535898;
typedef int Color;
class Shape {
public:
	Color color;

	int x;
	int y;
	int z;

	//print the shape
	virtual void print(const char* filename) {
		cout << "print shape." << '\n';
	}

	Shape(int x, int y, int z, Color c) : x(x), y(y), z(z), color(c) { }

	Color getColor() {
		return color;
	}

	void setColor(Color c) {
		color = c;
	}
};

#endif
