//Authors: Carly Bean, Chris Coyle, Yue Liang

#ifndef SHAPE3D_HH_
#define SHAPE3D_HH_
#include <iostream>
using namespace std;
#include "Shape.hh"


//class Shape3D represents all 3D shapes; it is a child of class Shape
//A Shape3D is defined by all parameters of a shape with the addition of an orientation vector, which determines what direction the 3DShape is pointing
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
//Each child of 3D shape should have the ability to return its volume and area:
	virtual double getVolume() = 0;

	virtual double getArea() = 0;

	//@return the intersect of this and that Shape3D
	//virtual Shape3D intersect(Shape3D that) = 0;

	//@return the substract of this and that Shape3D
	//virtual Shape3D substract(Shape3D that) = 0;


//These methods are called by the Transform3D class in order to manipulate the shape objects with translation,
// . . . giving a new position, orientation giving it neew direction, and scale giving it a new size.
	void setOrientation(double ori[]) {
		for(int i = 0; i < 3; i++) {
			orientation[i] = ori[i];
		}
	}

	void translate(Point trans) {
		center = center + trans;
	}

	virtual void scale(double s) = 0;

	//each child of Shape3D should be able to determine is a point is inside or outside of itself.
	virtual bool isInside(Point p) = 0;
};

#endif
