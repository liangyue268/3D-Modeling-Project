package mod3D;
import java.awt.Color;

public class Cylinder extends Shape3D {
	
	public double radius, height;
	
	public Cylinder(double r, double h, double orientation[], Color c, int center[]){
		
		super(center, c, orientation);
		radius = r;
		height = h;
	}
	
	double getVolume() { //V = pi*r^2*h
		return Math.PI*radius*radius*height;
	}

	double getArea() { //S = 2*pi*r*h + 2*pi*r^2
		return 2*Math.PI*radius*height + 2*Math.PI*radius*radius;
	}
	
	

}
