//Authoes: Carly Bean, Chris Coyle, Yue Liang

#include "Cylinder.hh"
bool Cylinder::isInside(Point p) { 
	if((p.x()/radius)*(p.x()/radius) + (p.y()/radius)*(p.y()/radius) <= 1 && (height/2) + center.z() <= p.z() <= center.z() - (height/2)) //how can we access Z since it is private. make x, y, z protected??
		return true;
	else
		return false;
}


double Cylinder::getVolume() {
	return PI*radius*radius*height; 
}

double Cylinder::getArea() { 
	return 2*PI*radius*height + 2*PI*radius*radius;
}


void Cylinder::scale(double s) {
	radius  = s*radius;
	height = s*height;
}