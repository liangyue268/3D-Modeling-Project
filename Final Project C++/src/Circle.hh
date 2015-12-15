//Authors: Carly Bean, Chris Coyle, Yue Liang

#ifndef CIRCLE_HH_
#define CIRCLE_HH_

#include "Shape2D.hh"
#include <iostream>
using namespace std;


class Circle : public Shape2D {
private:
public:
	double radius;
	Circle(double radius, int x, int y, Color c) : Shape2D(x, y, c), radius(radius) {}
	double getArea();

};


#endif