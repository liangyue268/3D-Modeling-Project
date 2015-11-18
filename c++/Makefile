3DModel.exe: main.o shape.o
	g++ main.o shape.o -o 3DModel.exe

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

Shape3D.hh: Shape.hh
	touch Shape3D.hh

Shape2D.hh: Shape.hh
	touch Shape2D.hh