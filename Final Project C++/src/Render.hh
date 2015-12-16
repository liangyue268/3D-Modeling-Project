#include "Facet.hh"
#include <iostream>
using namespace std;

class Render {
private:


public:
	//Constructor



	//Returns pointer to array of facets (traingles) that make up sphere
	Facet*  rendSphere(Sphere d);

	//Returns pointer to array of facets (traingles) that make up cube
	Facet* rendCube();

	//Returns pointer to array of facets (traingles) that make up cylinder
	Facet* rendCylinder();

};
