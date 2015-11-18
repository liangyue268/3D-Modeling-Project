#ifndef SHAPE_HH_
#define SHAPE_HH_

class Shape {
private:
	int x;
	int y;
	int z;
	Color color;
protected:
	//print the shape
	virtual print() { 
		cout << "print shape." << '\n';
	}

public:
	Shape(int x, int y, int z) : x(x), y(y), z(z) { }

	Color getColor() {
		return color;
	}

	setColor(Color c) {
		color = c;
	}
};

#endif