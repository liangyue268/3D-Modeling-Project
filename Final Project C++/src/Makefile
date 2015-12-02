3DModel.exe: main.o
	g++ main.o -o 3DModel.exe

main.o: main.cc
	g++ -c main.cc

main.cc: Cube.hh Sphere.hh Cylinder.hh
	touch main.cc

Cube.hh: Shape3D.hh
	touch Cube.hh

Sphere.hh: Shape3D.hh
	touch Sphere.hh

Cylinder.hh: Shape3D.hh
	touch Cylinder.hh

Polyhedron.hh: Shape3D.hh
	touch Polyhedron.hh

Rectangle.hh: Shape2D.hh
	touch Rectangle.hh

Triangle.hh: Shape2D.hh
	touch Triangle.hh

Circle.hh: Shape2D.hh
	touch Circle.hh

Polygon.hh: Shape2D.hh
	touch Polygon.hh

Shape3D.hh: Shape.hh
	touch Shape3D.hh

Shape2D.hh: Shape.hh
	touch Shape2D.hh