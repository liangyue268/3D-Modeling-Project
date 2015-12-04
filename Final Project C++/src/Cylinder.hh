#ifndef CYLINDER_HH_
#define CYLINDER_HH_

#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Cylinder : public Shape3D {
public:
	double radius;
	double height;

	Cylinder(double r, double h, double orientation[], Color c, Point p = Point(0, 0, 0)) : Shape3D(p, c, orientation), radius(r), height(h) { }
	

	bool isInside(double A, double B, double C) const { //(x/r)^2 + (y/r)^2 = 1
		if((A/radius)*(A/radius) + (B/radius)*(B/radius) <= 1 && (height/2) + z <= C <= z - (height/2)) //how can we access Z since it is private. make x, y, z protected??
			return true;
		else
			return false;
	}

	double getVolume() { //V = pi*r^2*h
		return PI*radius*radius*height; //PI is defined in shape.hh, is that the best place?
	}

	double getArea() { //S = 2*pi*r*h + 2*pi*r^2
		return 2*PI*radius*height + 2*PI*radius*radius;
	}

	double scale(double s) {
		radius  = s*radius;
		height = s*height;
	}
};


#endif
