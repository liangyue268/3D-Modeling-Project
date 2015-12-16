//Authors: Carly Bean, Chris Coyle, Yue Liang

#include "Sphere.hh"

double Sphere::getVolume(){
	return (4/3)*PI*radius*radius*radius;
}

double Sphere::getArea(){
	return 4*PI*radius*radius;
}

bool Sphere::isInside(Point p){
	if((p.x()-center.x())*(p.x()-center.x()) + (p.y()-center.y())*(p.y()-center.y())+(p.z()-center.z())*(p.z()-center.z()) <= radius*radius)
			return true;
		else
			return false;
}

void Sphere:: scale(double s){
	radius = s * radius;
}