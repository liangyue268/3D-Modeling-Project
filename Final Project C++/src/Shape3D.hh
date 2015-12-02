#ifndef SHAPE3D_HH_
#define SHAPE3D_HH_

#include "Shape.hh"
class Shape3D : public Shape {
public:
	Shape3D(int x, int y, int z, Color c) : Shape(x, y, z, c) { }

	//TODO: what we need do for this function?
	virtual void translate() = 0;

	//@param (x, y, z) is the direction that the Shape needs to rotate
	virtual void rotate(int x, int y, int z) = 0;

	//@param amp is the multiplier of the scale
	virtual void scale(double amp) = 0;

	//@return the intersect of this and that Shape3D
	//virtual Shape3D intersect(Shape3D that) = 0;

	//@return the substract of this and that Shape3D
	//virtual Shape3D substract(Shape3D that) = 0;

	//@return the volume of the Shape
	virtual double getVolume() = 0;

	//@return the area of the Shape
	virtual double getArea() = 0;
};

#endif
