#ifndef SHAPE2D_HH_
#define SHAPE2D_HH_

class Shape2D {
public:
	//what we need do for this function?
	virtual void translate() = 0;

	//@param (x, y) is the direction that the Shape needs to rotate
	virtual void rotate(int x, int y) = 0;

	//@param amp is the multiplier of the scale
	virtual void scale(double amp) = 0;

	//@return the intersect of this and that Shape2D
	virtual Shape2D intersect(Shape2D that) = 0;

	//@return the substract of this and that Shape2D
	virtual Shape2D substract(Shape2D that) = 0;

	//@return the volume of the Shape
	virtual double getVolume() = 0;

	//@return the area of the Shape
	virtual double getArea() = 0;
};

#endif