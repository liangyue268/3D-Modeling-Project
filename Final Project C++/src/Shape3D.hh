#ifndef SHAPE3D_HH_
#define SHAPE3D_HH_
#include <iostream>
using namespace std;
#include "Shape.hh"

class Shape3D : public Shape {
private:
	double* orientation;
public:
	Shape3D(Point p, Color c, double orientation[]) : Shape(p, c) {
		this->orientation = new double[3];
		for(int i = 0; i < 3; i++) {
			this->orientation[i] = orientation[i];
		}
	}

	virtual double getVolume() = 0;

	virtual double getArea() = 0;

	//@return the intersect of this and that Shape3D
	//virtual Shape3D intersect(Shape3D that) = 0;

	//@return the substract of this and that Shape3D
	//virtual Shape3D substract(Shape3D that) = 0;


};

#endif
