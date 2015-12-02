#include <iostream>
#include "Cube.hh"
using namespace std;

int main(){
	Cube cube(1,2,3);
	cube.print("asd.stl");
	cout << "The Area of " << cube << " is " << cube.getArea();
}
