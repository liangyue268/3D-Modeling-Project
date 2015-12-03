/*
 * Transform3D.hh
 *
 *  Created on: Dec 2, 2015
 *      Author: Class2015
 */

#ifndef TRANSFORM3D_HH_
#define TRANSFORM3D_HH_


#include "Shape3D.hh"

#include <iostream>
#include <fstream>

using namespace std;

class Transform3D : public Shape3D {


Transform3D(Shape3D [] d, int trans[], int Orientation[], double scale){

}

void Translate(Shape3D s, int transx, int transy, int transz){

	s.x = s.x+transx;
	s.y = s.y+transy;
	s.z = s.z+transz;
}

void OrienationChange (Shape3D s, int x, int y, int z){

	s.oR[0] = x;
	s.oR[1] = y;
	s.oR[2] = z;
}

void Scale(Sphere p, double s )	{  //Pass the method a Sphere and a scale double

	p.radius = s*p.radius;

}

void Scale(Cube c, double s){ //Pass the method a cube and a scale double.

	c.length = s*c.length;
	c.width = s*c.width;
	c.height = s*c.height;

}

void Scale(Cylinder c, double s){//Pass the method a cube and a scale double

 c.radius  = s*c.radius;
 c.height = s*c.height;

}




};


#endif /* TRANSFORM3D_HH_ */
