#ifndef SHAPE2D_HH_
#define SHAPE2D_HH_

#include "Shape.hh"
class Shape2D : public Shape {
public:
	Shape2D(int x, int y, Color c) : Shape(Point(x, y, 0), c) { }

//(x & y are the coordinates of the center point)

	//@return the intersect of this and that Shape2D
	//virtual Shape2D intersect(Shape2D that) = 0;

	//@return the substract of this and that Shape2D
	//virtual Shape2D substract(Shape2D that) = 0;

	//@return the area of the Shape
	virtual double getArea() = 0;
};

#endif
