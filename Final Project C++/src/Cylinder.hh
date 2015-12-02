#ifndef CYLINDER_HH_
#define CYLINDER_HH_

#include "Shape3D.hh"
class Cylinder : public Shape3D {
private:
	double radius;
	double height;
public:
	Cylinder(double r, double h, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z), radius(r), height(h) { }
	
	bool isInside(double A, double B, double C) const { //(x/r)^2 + (y/r)^2 = 1
		if((A/radius)*(A/radius) + (B/radius)*(B/radius) <= 1 && (height/2) + z <= C <= z - (height/2)) //how can we access Z since it is private. make x, y, z protected??
			return true;
		else
			return false;
	}

	double getVolume() { //V = pi*r^2*h
		const double PI = 3.1415926535898;
		return PI*radius*radius*height; //where is the best place to define PI???
	}

	double getArea() { //S = 2*pi*r*h + 2*pi*r^2
		return 2*PI*radius*height + 2*PI*radius*radius;
	}
	//TODO: override all virtual functions
};


#endif
