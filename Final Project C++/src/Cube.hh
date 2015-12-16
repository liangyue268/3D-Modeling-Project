#ifndef CUBE_HH_
#define CUBE_HH_

#include "Shape3D.hh"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class Cube : public Shape3D {
public:
	double length;
	double width;
	double height;


	Cube(double l, double w, double h, Color c, double ori[], Point p = Point(0, 0, 0)) : Shape3D(p, c, ori), length(l), width(w), height(h) {}

	//this should work even for translated cubes but not sure about strangely oriented cubes
	bool const isInside(Point p);
	double const getVolume();

	double const getArea();
	void scale(double s);
/*
	void print(const char* filename) {
		//cout << "print cube." << '\n';
		//file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		ofstream file(filename);
		file << "solid OpenSCAD_Model\n";
		//face 1
		file << "  facet normal -0 0 1\n";
		file << "    outer loop\n";
		file << "      vertex 0 " << width << ' ' << height << '\n';
		file << "      vertex " << length << " 0 " << height << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal 0 0 1\n";
		file << "    outer loop\n";
		file << "      vertex " << length << ' ' << '0' << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << '0' << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		//face 2
		file << "  facet normal 0 0 -1\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << '0' << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal -0 0 -1\n";
		file << "    outer loop\n";
		file << "      vertex " << length << ' ' << width << ' ' << '0' << '\n';
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		//face 3
		file << "  facet normal 0 -1 0\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << '0' << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << '0' << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal 0 -1 -0\n";
		file << "    outer loop\n";
		file << "      vertex " << length << ' ' << '0' << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << '0' << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";

		file << "endsolid OpenSCAD_Model\n";
	}
*/
	friend ostream& operator <<(ostream& s, const Cube& c) {
		s << "cube(" << c.length << ", " << c.width << ", " << c.height << ")";
		return s;
	}
};

#endif
