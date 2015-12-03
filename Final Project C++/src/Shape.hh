#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
#include "Point.hh"
using namespace std;

const double PI = 3.1415926535898;
typedef int Color;
class Shape {
public:
	Color color;
	Point center;

	//print the shape
	virtual void print(const char* filename) {
		cout << "print shape." << '\n';
	}

	Shape(Point p,  Color c) : center(p), color(c) { }

	Color getColor() {
		return color;
	}

	void setColor(Color c) {
		color = c;
	}
};

#endif
