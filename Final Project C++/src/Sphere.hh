#ifndef SPHERE_HH_
#define SPHERE_HH_
#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Sphere : public Shape3D {

public:
	double radius;


	//Shape3D(int x, int y, int z, int orientation[3], Color c)
	Sphere(double r, int double[], Color c, Point p) : Shape3D(p , orientation,  c), radius(r) { }


	double getVolume(){
		return (4/3)*PI*radius*radius*radius;

	}

	double getArea(){
		return 4*PI*radius*radius;
	}

    //r^2 = (x-x0)^2 + (y-y0)^2 + (z-z0)^2
	bool isInside(double a, double b, double c){
		if((a-x)*(a-x) + (b-y)*(b-y)+(c-z)*(c-z) <= radius*radius)
			return true;
		else
			return false;
	}

	void scale(double s) {
		radius = s * radius;
	}

};

#endif
