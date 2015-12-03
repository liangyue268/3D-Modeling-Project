#ifndef SHAPE3D_HH_
#define SHAPE3D_HH_
#include <iostream>
using namespace std;
#include "Shape.hh"

class Shape3D : public Shape {
public:
	int  oR[3];

//issue with passing orientation[3]; says ' cannot assign int* to int[3];
	Shape3D(int x, int y, int z, int orientation[3], Color c) : Shape(x, y, z, c), oR(orientation){ }



	//@return the intersect of this and that Shape3D
	//virtual Shape3D intersect(Shape3D that) = 0;

	//@return the substract of this and that Shape3D
	//virtual Shape3D substract(Shape3D that) = 0;


};

#endif
