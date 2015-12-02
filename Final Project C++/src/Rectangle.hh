#ifndef RECTANGLE_HH_
#define RECTANGLE_HH_

#include "Shape2D.hh"
#include <iostream>
using namespace std;


class Rectangle : public Shape2D {
private:
	double length;
	double width;
public:
	Rectangle(double l, double w, int x = 0, int y = 0) : Shape2D(x,y), length(l), width(w){}

	double getArea(){
		return l*w;
	}

};



#endif 
