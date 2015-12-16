#ifndef CUBE_HH_
#define CUBE_HH_

#include "Shape3D.hh"
#include <iostream>
#include <cmath>
using namespace std;

class Cube : public Shape3D {
public:
	double length;
	double width;
	double height;


	Cube(double l, double w, double h, Color c, double ori[], Point p = Point(0, 0, 0)) : Shape3D(p, c, ori), length(l), width(w), height(h) {}

	//this should work even for translated cubes but not sure about strangely oriented cubes
	bool const isInside(Point p);
	double const getVolume();

	double const getArea();
	void scale(double s);
	void render();
	friend ostream& operator <<(ostream& s, const Cube& c) {
		s << "cube(" << c.length << ", " << c.width << ", " << c.height << ")";
		return s;
	}
};

#endif
