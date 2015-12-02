/*
 * Polygon.hh
 *
 *  Created on: Dec 1, 2015
 *      Author: Class2015
 */

#ifndef POLYGON_HH_
#define POLYGON_HH_

#include "Shape2D.hh"
#include <iostream>
using namespace std;


class Polygon : public Shape2D {

private:
	int x[];
	int y[];
	int corners;

public:
	Polygon(int cx, int cy, int x[], int y[], int corners) : Shape2D(cx, cy) {
		//corners is the number of corners
		//x[] is all the x values of corners, going clockwise
		//y[] is al the y values of corners, going clockwise


	}



bool isInside(int px, int py) { // Only works for Non-Concave Polygons
	int xmax = x[0];
	int xmin = x[0];
	int inside = 1;
		for (int i = 0; i < corners ; i++ ){
				if (xmax < x[i])
				xmax = x[i];
						}

		for (int i = 0; i < corners ; i++ ){
				if (xmin > x[i])
				xmin = x[i];
						}

	for(int i = 0 ; i < corners ; i++){
		bool above = 1;
		int b = y[i+1] - (x[i+1]*((y[i+1]-y[i])/(x[i+1]-x[i])));

					for(int j = 0 ; j < corners ; j++){

						if (y[j]>x[j]*(y[i+1]-y[i])/(x[i+1]-x[i])+ b)
						above = above*1;
						else above = above*0;
		}

		if ((py > (px*(y[i+1]-y[i])/(x[i+1]-x[i]))+ b) && px >= xmin && x<=xmax && above ==1)

			inside = inside*1;

		else if((py < (px*(y[i+1]-y[i])/(x[i+1]-x[i]))+ b) && px >= xmin && x<=xmax && above == 0)
			inside = inside*1;

		else
			inside = inside*0;
		}

	return inside;
	}

};


#endif /* POLYGON_HH_ */
