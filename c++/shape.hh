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
	print() {

	}
public:
	Color getColor() {
		return color;
	}

	setColor(Color c) {
		color = c;
	}
};

#endif