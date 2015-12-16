//Authors: Carly Bean, Chris Coyle, Yue Linag
#include "Cube.hh"
#include <fstream>

bool const Cube::isInside(Point p) {
	if(abs(p.x() - center.x()) <= (length / 2) && abs(p.y() - center.y()) <= (width / 2) && abs(p.z() - center.z()) <= (height / 2)) {
		return true;
	}
	else {
		return false;
	}
}

double const Cube::getVolume(){
	return length * width * height;
}

double const Cube::getArea(){
	return 2 * (length * width + length * height + width * height);
}

void Cube::scale(double s){
	length = s*length;
	width = s*width;
	height = s*height;
}

//creates file "Cube.stl"
void Cube::render(){
		ofstream file;
		file.open("Cube.stl");
		file << "solid OpenSCAD_Model\n";
		//face 1
		file << "  facet normal 0 0 1\n";
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
		file << "  facet normal 0 0 -1\n";
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
		//face 4
		file << "  facet normal -1 0 0\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal -1 0 0\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << '0' << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		//face 5
		file << "  facet normal 0 1 0\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << width << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << '0' << ' ' << width << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal 0 1 0\n";
		file << "    outer loop\n";
		file << "      vertex " << '0' << ' ' << width << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		//face 6
		file << "  facet normal 1 0 0\n";
		file << "    outer loop\n";
		file << "      vertex " << length << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << '0' << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";
		file << "  facet normal 1 0 0\n";
		file << "    outer loop\n";
		file << "      vertex " << length << ' ' << '0' << ' ' << '0' << '\n';
		file << "      vertex " << length << ' ' << width << ' ' << height << '\n';
		file << "      vertex " << length << ' ' << '0' << ' ' << height << '\n';
		file << "    endloop\n";
		file << "  endfacet\n";

		file << "endsolid OpenSCAD_Model\n";
		file.close();
}
