3DModel.exe: main.o Cube.o Sphere.o Cylinder.o Transform3D.o
	g++ main.o Cube.o Sphere.o Cylinder.o Transform3D.o -o 3DModel.exe

main.o: main.cc
	g++ -c main.cc

main.cc: Cube.hh Sphere.hh Cylinder.hh Transform3D.hh
	touch main.cc

Cube.o: Cube.cc
	g++ -c Cube.cc

Cube.cc: Cube.hh
	touch Cube.cc

Cube.hh: Shape3D.hh
	touch Cube.hh

Sphere.o: Sphere.cc
	g++ -c Sphere.cc

Sphere.cc: Sphere.hh
	touch Sphere.cc

Sphere.hh: Shape3D.hh
	touch Sphere.hh

Cylinder.o: Cylinder.cc
	g++ -c Cylinder.cc

Cylinder.cc: Cylinder.hh
	touch Cylinder.cc

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
	
Shape.hh: Point.hh
	touch Shape.hh
	
Transform3D.o: Transform3D.cc
	g++ -c Transform3D.cc

Transform3D.cc: Transform3D.hh
	touch Transform3D.cc
	
Transform3D.hh: Shape3D.hh
	touch Transform3D.hh