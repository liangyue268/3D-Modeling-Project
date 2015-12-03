#include <iostream>
#include "Cube.hh"
#include "Point.hh"
using namespace std;

typedef int Color;
int main(){
	//possible client
	int ori[3] = {1,1,1};
	Color c = 1;
	Cube cube(1,2,3, ori, c);
	//cube.print("asd.stl");
	cout << "The Area of " << cube << " is " << cube.getArea() << '\n';

	Point p(1,2,3);
	cout << p;
}
