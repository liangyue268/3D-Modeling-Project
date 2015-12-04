//Authors: Carly Bean, Chris Coyle, Yue Liang
#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
#include "Point.hh"
using namespace std;

const double PI = 3.1415926535898;
typedef int Color;

//Abstract class defining a shape's color and center point
class Shape {
//Made data public bc the point is to be able to manipulate these shapes
public:
	Color color;
	Point center;

	//pure virtual function to print a shape to STL format
	virtual void print(const char* filename) = 0;

	//Constructor
	Shape(Point p,  Color c) : center(p), color(c) { }

	//Method to retrieve a shape's color ---shouldn't need any more if color is public
	Color getColor() const {
		return color;
	}

	//Method to change a shape's color ---shouldn't need any more if color is public
	void setColor(Color c) {
		color = c;
	}
};

#endif
