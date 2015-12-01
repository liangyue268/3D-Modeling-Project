#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
using namespace std;

typedef int Color;
class Shape {
private:
	int x;
	int y;
	int z;
	Color color;

public:
	//print the shape
	virtual void print() {
		cout << "print shape." << '\n';
	}

	Shape(int x, int y, int z) : x(x), y(y), z(z) { }

	Color getColor() {
		return color;
	}

	void setColor(Color c) {
		color = c;
	}
};

#endif
