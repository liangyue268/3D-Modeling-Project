#ifndef TRIANGLE_HH_
#define TRIANGLE_HH_

#include "Shape2D.hh"
#include <iostream>
#include <cmath> //should this be included here or somewhere else?
using namespace std;

//Triangle is a Shape2D, represented by three (x,y) vertices, along with the data in Shape 2D
class Triangle : public Shape2D {
private:
	int x1, y1;
	int x2, y2;
	int x3 ,y3;
public:
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3, Color c, int x=0, int y=0) : Shape2D(x,y,c), x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

	double getArea(){ //A = abs[(x1(y2-y3) + x2(y3-y1) + x3(y1-y2))/2]
		return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2);
	}


};




#endif 
