//Authors: Carly Bean, Chris Coyle, Yue Liang
#include "Transform3D.hh"

void Transform3D::translate(Point trans){
	for(int i = 0; i < n; i++) {
		d[i].translate(trans);
	}
}

void Transform3D::changeOrientation(double x, double y, double z){
	double ori[3] = {x, y, z};
	for(int i = 0; i < n; i++) {
		d[i].setOrientation(ori);
	}
}

void Transform3D::scale(double s) {
	for(int i = 0; i < n; i++) {
		d[i].scale(s);
	}
}