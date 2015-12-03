#ifndef SHAPE3D_HH_
#define SHAPE3D_HH_
#include <iostream>
using namespace std;
#include "Shape.hh"

class Shape3D : public Shape {
private:
	int* orientation;
public:
	Shape3D(int x, int y, int z, Color c, int orientation[]) : Shape(x, y, z, c) {
		this->orientation = new int[3];
		for(int i = 0; i < 3; i++) {
			this->orientation[i] = orientation[i];
		}
	}

	//@return the intersect of this and that Shape3D
	//virtual Shape3D intersect(Shape3D that) = 0;

	//@return the substract of this and that Shape3D
	//virtual Shape3D substract(Shape3D that) = 0;


};

#endif
