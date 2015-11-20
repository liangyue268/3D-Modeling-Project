#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
using namespace std;

class Shape {
private:
	int x;
	int y;
	int z;
	Color color;
protected:
	//print the shape
	virtual void print() {
		cout << "print shape." << '\n';
	}

public:
	Shape(int x, int y, int z) : x(x), y(y), z(z) { }

	Color getColor() {
		return color;
	}

	void setColor(Color c) {
		color = c;
	}
};

#endif
