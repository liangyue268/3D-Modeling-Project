//Authors: Carly Bean, Chris Coyle, Yue Liang

#ifndef TRANSFORM3D_HH_
#define TRANSFORM3D_HH_

#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Transform3D {
private:
	Shape3D* d;
	int n;

//a Transform3D object is passed an array of Shape3D objects, upon which it will apply designated transformations
//the purpose for this is to be able to apply designated changes to multiple Shape3D objects at once.
public:
	Transform3D(Shape3D d[], int n) : n(n) { //error trying to instantiate abstract type??
		this->d = new Shape3D*[n];
		for(int i = 0; i < n; i++) {
			this->d[i] = &d[i];
		}
	}

//Transformations are made by calling the methods translate, changeOrientation and	scale.
//Transformation3D's methods call methods within Shape3D, which actually apply the change.

	void translate(Point trans);

	void changeOrientation(double x, double y, double z);

	void scale(double s);

};

#endif /* TRANSFORM3D_HH_ */
