#ifndef CUBE_HH_
#define CUBE_HH_

class Cube : public Shape3D {
private:
	double length;
	double width;
	double height;

public:
	Cube(double l, double w, double h, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z), length(l), width(w), height(h) { }

	//TODO: override all virtual functions
};

#endif