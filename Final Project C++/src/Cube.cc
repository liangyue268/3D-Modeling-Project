//Authors: Carly Bean, Chris Coyle, Yue Linag
#include "Cube.hh"

bool const Cube::isInside(Point p) {
	if(abs(p.x() - center.x()) <= (length / 2) && abs(p.y() - center.y()) <= (width / 2) && abs(p.z() - center.z()) <= (height / 2)) {
		return true;
	}
	else {
		return false;
	}
}

double const Cube::getVolume(){
	return length * width * height;
}

double const Cube::getArea(){
	return 2 * (length * width + length * height + width * height);
}

void Cube::scale(double s){
	length = s*length;
	width = s*width;
	height = s*height;
}
