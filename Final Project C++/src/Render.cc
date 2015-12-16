#include "Render.hh"
#include "Shape3D"

	Facet*  rendSphere(Sphere d){

		double s = 0.707;

		Facet sphere[32];

		//Top Cap

		Point a1 = new Point(d.center._x, d.center._y , d.center._z+ d.radius );
		Point a2 = new Point(d.center._x+d.radius*s, d.center._y , d.center._z+ d.radius*s );
		Point a3 = new Point(d.center._x, d.center._y+d.radius*s , d.center._z+ d.radius*s );
		Facet t1 = new Facet(a1, a2, a3);
		Point a4 = new Point (d.center._x -d.radius*s , d.center._y , d.center._z+ d.radius*s );
		Facet t2 = new Facet(a1, a3, a4);
		Point a5 = new Point(d.center._x, d.center._y-d.radius*s , d.center._z+ d.radius*s );
		Facet t3 = new Facet(a1, a4, a5);
		Facet t4 = new Facet(a1, a5, a2);

		//Top Belt

		Point a6 = new Point(d.center._x+d.radius, d.center._y , d.center._z );
		Point a7 = new Point(d.center._x+d.radius*s, d.center._y+d.radius*s , d.center._z );
		Facet t5 = new Facet(a2, a6, a7);
		Facet t6 = new Facet(a2, a3, a7);
		Point a8 = new Point(d.center._x, d.center._y +d.radius, d.center._z );
		Facet t7 = new Facet(a3, a7, a8);
		Point a9 = new Point(d.center._x-d.radius*s, d.center._y+d.radius*s , d.center._z );
		Facet t8 = new Facet(a3, a8, a9);
		Facet t9 = new Facet(a3, a4, a9);
		Point a10 = new Point(d.center._x-d.radius, d.center._y , d.center._z );
		Facet t10 = new Facet(a4, a9, a10);
		Point a11 = new Point(d.center._x-d.radius*s, d.center._y-d.radius*s , d.center._z );
		Facet t11 = new Facet(a4, a10, a11);
		Facet t12 = new Facet(a4, a5, a11);
		Point a12 = new Point(d.center._x, d.center._y -d.radius, d.center._z );
		Facet t13 = new Facet(a5, a11, a12);
		Point a13 = new Point(d.center._x+d.radius*s, d.center._y-d.radius*s , d.center._z );
		Facet t14 = new Facet(a5, a12, a13);
		Facet t15 = new Facet(a5, a2, a13);
		Facet t16 = new Facet(a2, a13, a6);


		Point a3 = new Point(d.center._x, d.center._y+d.radius*s , d.center._z+ d.radius*s );
		Facet t1 = new Facet(a1, a2, a3);
		sphere[0] = t1;
		Point a4 = new Point (d.center._x -d.radius*s , d.center._y , d.center._z+ d.radius*s );
		Facet t2 = new Facet(a1, a3, a4);
		Point a5 = new Point(d.center._x, d.center._y-d.radius*s , d.center._z+ d.radius*s );
		Facet t3 = new Facet(a1, a4, a5);
		Facet t4 = new Facet(a1, a5, a2);



	};

	Facet* rendCube(){




	};


