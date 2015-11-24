#ifndef CUBE_HH_
#define CUBE_HH_

#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Cube : public Shape3D {
private:
	double length;
	double width;
	double height;

public:
	Cube(double l, double w, double h, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z), length(l), width(w), height(h) { }

	//TODO: override all virtual functions
	void translate() {

	}

	void rotate(int x, int y, int z) {

	}

	void scale(double amp) {

	}

	double getVolume() {
		return length * width * height;
	}

	double getArea() {
		return 2 * (length * width + length * height + width * height);
	}

	void print() {
		cout << "print cube." << '\n';
	}
};

#endif
