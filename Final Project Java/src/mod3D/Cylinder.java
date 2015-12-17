//Author: Christopher Coyle

package mod3D;
import java.awt.Color;

//Represents a cylinder shape, is a child of class Shape3D
public class Cylinder extends Shape3D {

	//Defines a cylinder by all parameters of a Shape3D along with height and radius
	public double radius, height;
	
	public Cylinder(double r, double h, double orientation[], Color c, int center[]){
		
		super(center, c, orientation);
		radius = r;
		height = h;
	}
	
	//Returns volume of a cylinder
	double getVolume() { //V = pi*r^2*h
		return Math.PI*radius*radius*height;
	}

	//Returns surface area of a cylinder
	double getArea() { //S = 2*pi*r*h + 2*pi*r^2
		return 2*Math.PI*radius*height + 2*Math.PI*radius*radius;
	}
	
	

}
