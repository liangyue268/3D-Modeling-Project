//Authors: Carly Bean, Chris Coyle, Yue Liang
#ifndef RECTANGLE_HH_
#define RECTANGLE_HH_

#include "Shape2D.hh"
#include <iostream>
using namespace std;

//Represents a 2D rectangle shape, a child of class Shape2D
class Rectangle : public Shape2D {
private:
//data is public because we want to be able to change it
public:
	double length;
	double width;
	//Constructor
	Rectangle(double l, double w, Color c, int x = 0, int y = 0) : Shape2D(x,y,c), length(l), width(w){}

	//Returns the area of a rectangle
	double getArea(){
		return length*width;
	}

};



#endif 
