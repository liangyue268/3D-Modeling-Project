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


void Translate(Shape3D s, int transx, int transy, int transz){

	s.x = s.x+transx;
	s.y = s.y+transy;
	s.z = s.z+transz;
}



void ScaleSphere(Sphere p, double s )	{  //Pass the method a Sphere and a scale double

	p.radius = s*p.radius;

}

void ScaleCube(Cube c, double s){ //Pass the method a cube and a scale double.

	c.length = s*c.length;
	c.width = s*c.width;
	c.height = s*c.height;

}

void ScaleCylinder(Cylinder c, double s){//Pass the method a cube and a scale double

 c.radius  = s*c.radius;
 c.height = s*c.height;

}




};


#endif /* TRANSFORM3D_HH_ */
