#include <iostream>
#include "Cube.hh"
using namespace std;

int main(){
	Cube cube(1,2,3);
	cube.print();
	cout << cube.getArea();
}
