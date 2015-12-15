//Authors: Carly Bean, Chris Coyle, Yue Liang
#ifndef CYLINDER_HH_
#define CYLINDER_HH_

#include "Shape3D.hh"
#include "Point.hh"
#include <iostream>
using namespace std;

//Represents a cylinder shape, is a child of class Shape3D
class Cylinder : public Shape3D {
public:
	double radius;
	double height;

	//Constructor
	Cylinder(double r, double h, double orientation[], Color c, Point p = Point(0, 0, 0)) : Shape3D(p, c, orientation), radius(r), height(h) { }

	//For a given point (A,B,C) returns true if point is in the cylinder, otherwise returns false
	bool isInside(Point p); //(x/r)^2 + (y/r)^2 = 1   //can't be const bc of point
	
	

	//Returns volume of a cylinder
	double getVolume(); //V = pi*r^2*h
	
	
	//Returns surface area of a cylinder
	double getArea(); //S = 2*pi*r*h + 2*pi*r^2
		

	//changes radius and height values to scale cylinder
	void scale(double s);
		
};


#endif
