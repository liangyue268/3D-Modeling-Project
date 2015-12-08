//Authors: Carly Bean, Chris Coyle, Yue Liang

#ifndef SPHERE_HH_
#define SPHERE_HH_
#include "Shape3D.hh"
#include <iostream>
using namespace std;

//Represents a sphere shape, is a child of class Shape3D
class Sphere : public Shape3D {

public:
	double radius;


	//Constructor
	Sphere(double r, Color c, double orientation[], Point p) : Shape3D(p, c, orientation), radius(r) { }

	//Returns volume of a sphere
	double getVolume(){
		return (4/3)*PI*radius*radius*radius;
	}

	//Returns surface area of a sphere
	double getArea(){
		return 4*PI*radius*radius;
	}

	//For a given point (a,b,c) returns true if point is in the sphere, otherwise returns false
    //r^2 = (x-x0)^2 + (y-y0)^2 + (z-z0)^2
	bool isInside(double a, double b, double c){
		if((a-center.x())*(a-center.x()) + (b-center.y())*(b-center.y())+(c-center.z())*(c-center.z()) <= radius*radius)
			return true;
		else
			return false;
	}

	//Changes radius of sphere to scale it
	void scale(double s) {
		radius = s * radius;
	}

};

#endif
