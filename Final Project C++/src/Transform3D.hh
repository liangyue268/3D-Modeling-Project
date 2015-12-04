/*
 * Transform3D.hh
 *
 *  Created on: Dec 2, 2015
 *      Author: Class2015
 */

#ifndef TRANSFORM3D_HH_
#define TRANSFORM3D_HH_

#include "Shape3D.hh"
#include <iostream>
using namespace std;

class Transform3D {
private:
	Shape3D* d;
	int n;
public:
	Transform3D(Shape3D d[], int n) : n(n) {
		this->d = new Shape3D*[n];
		for(int i = 0; i < n; i++) {
			this->d[i] = &d[i];
		}
	}

	void translate(Point trans){
		for(int i = 0; i < n; i++) {
			d[i].translate(trans);
		}
	}

	void changeOrientation(double x, double y, double z){
		double ori[3] = {x, y, z};
		for(int i = 0; i < n; i++) {
			d[i].setOrientation(ori);
		}
	}

	void scale(double s) {  //Pass the method a Sphere and a scale double
		for(int i = 0; i < n; i++) {
			d[i].scale(s);
		}
	}
};

#endif /* TRANSFORM3D_HH_ */
