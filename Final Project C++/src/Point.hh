/*
 * Point.hh
 *
 *  Created on: Dec 3, 2015
 *      Author: yue
 */

#ifndef POINT_HH_
#define POINT_HH_

#include <iostream>
class Point {
public:
	int _x, _y, _z;

	Point(int x, int y, int z) : _x(x), _y(y), _z(z) { }

	int x() {
		return _x;
	}

	int y() {
		return _y;
	}

	int z() {
		return _z;
	}

	friend ostream& operator <<(ostream& s, const Point& p) {
		s << '(' << p._x << ", " << p._y << ", " << p._z << ')';
		return s;
	}

	friend Point operator +(Point a, Point b) {
		return Point(a._x + b._x, a._y + b._y, a._z + b._z);
	}
};

#endif /* POINT_HH_ */
