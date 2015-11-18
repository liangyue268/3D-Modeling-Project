#ifndef SPHERE_HH_
#define SPHERE_HH_

class Sphere : public Shape3D {
private:
	double radius;
public:
	Sphere(double r, int x = 0, int y = 0, int z = 0) : Shape3D(x, y, z, r), radius(r) { }
	//TODO: override all virtual functions
};

#endif