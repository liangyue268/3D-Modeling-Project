#ifndef SPHERE_HH_
#define SPHERE_HH_
#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Sphere : public Shape3D {

public:
	double radius;


	//Shape3D(int x, int y, int z, int orientation[3], Color c)
	Sphere(double r, int orientation[], Color c, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z, orientation,  c), radius(r) { }


	double getVolume(){


	}

	double getArea(){}


	bool isInside(){}

};

#endif
