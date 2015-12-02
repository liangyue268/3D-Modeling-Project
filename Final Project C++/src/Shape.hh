#ifndef SHAPE_HH_
#define SHAPE_HH_

#include <iostream>
using namespace std;

const double PI = 3.1415926535898;
typedef int Color;
class Shape {
private:
	Color color;
protected:
	int x;
	int y;
	int z;
public:
	//print the shape
	virtual void print(const char* filename) {
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
