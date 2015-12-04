#include <iostream>
#include "Sphere.hh"
#include "Cylinder.hh"
#include "Cube.hh"
#include "Point.hh"
#include "Shape3D.hh"
#include "Transform3D.hh"
#include "Shape.hh"
using namespace std;

typedef int Color;
int main(){

	//Create a Cube Object

	double length = 1, width = 2, height1 = 3;

	Color c = 5;


	double orienation [3]= {0.0,0.0,1.0};

	Point center1 ( 1,1,1);

	Cube cube1 (length, width, height1, c, orientation, center1);

			//Determine area and volume of cube
			double areaCube1, volumeCube1;

			areaCube1 = cube1.getArea();

			volumeCube1 = cube1.getVolume();

	//		cout << "Area of cube1: " << areaCube1 << " Volume of cube1: " << volumeCube1 << endl;



	//Create a Sphere Object

	double radius1 = 2;

	Point center2 ( 10,10,10);

	Sphere sph1(radius1, orienation, c,center2 );

	//Create a Cylinder Object

	double radius2 = 3, height2 = 10;

	Point center3 ( 5, 10, 20);

	Cylinder cyl1 (radius2, height2, orientation, c, center3);

	// Transform Shape Objects

	Shape3D* d[3] = {cube1, sph1, cyl1};

	Transform3D t (d, 3);

	Point translation (4,4,4);

	t.translate(translation);
	t.changeOrientation( 0 , 1.0, 0);
	t.scale(2);





}
