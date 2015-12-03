#include <iostream>
#include "Cube.hh"
using namespace std;

typedef int Color;
int main(){
	int ori[3] = {1,1,1};
	Color c = 1;
	Cube cube(1,2,3, ori, c);
	//cube.print("asd.stl");
	cout << "The Area of " << cube << " is " << cube.getArea();
}
