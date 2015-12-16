#include "Render.hh"

	Facet*  rendSphere(Sphere d){

		double s = 0.707;

	//	Facet sphere[32];

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

		//Bottom Belt
		Point a14 = new Point(d.center._x+d.radius*s, d.center._y , d.center._z- d.radius*s );
		Facet t17 = new Facet(a14, a6, a7);
		Point a15 = new Point(d.center._x, d.center._y+d.radius*s , d.center._z- d.radius*s );
		Facet t18 = new Facet(a14, a7, a15);
		Facet t19 = new Facet(a15, a7, a8);
		Facet t20 = new Facet(a15, a8, a9);
		Point a16 = new Point (d.center._x -d.radius*s , d.center._y , d.center._z- d.radius*s );
		Facet t21 = new Facet(a15, a16, a9);
		Facet t22 = new Facet(a16, a9, a10);
		Facet t23 = new Facet(a16, a10, a11);
		Point a17 = new Point(d.center._x, d.center._y-d.radius*s , d.center._z- d.radius*s );
		Facet t24 = new Facet(a16, a17, a11);
		Facet t25 = new Facet(a17, a11, a12);
		Facet t26 = new Facet(a17, a12, a13);
		Facet t27 = new Facet(a17, a14, a13);
		Facet t28 = new Facet(a14, a13, a6);

		//Bottom Hat
		Point a18 = new Point(d.center._x, d.center._y , d.center._z- d.radius );
		Facet t29 = new Facet(a18, a14, a15);
		Facet t30 = new Facet(a18, a15, a16);
		Facet t31 = new Facet(a18, a16, a17);
		Facet t32 = new Facet(a18, a17, a14);

	Facet sphere[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32};

	return sphere;

	};




