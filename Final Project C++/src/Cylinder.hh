#ifndef CYLINDER_HH_
#define CYLINDER_HH_

class Cylinder : public Shape3D {
private:
	double radius;
	double height;
public:
	Cylinder(double r, double h, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z), radius(r), height(h) { }

	//TODO: override all virtual functions
};

#endif
