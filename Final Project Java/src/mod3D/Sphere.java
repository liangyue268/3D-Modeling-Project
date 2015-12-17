//Author: Raya Rahman
package mod3D;
import java.awt.Color;

//Represents a sphere shape, is a child of class Shape3D
public class Sphere extends Shape3D {

public double radius;

//Defines a sphere based on all parameters of a Shape3D along with a radius.
public Sphere(double r, double orientation[], Color c, int center[]){
	super(center, c, orientation);
	radius = r;


}
//Returns volume of a sphere
double getVolume(){
	return (4/3)*Math.PI*radius*radius*radius;

}

//Returns surface area of a sphere
double getArea(){
	return 4*Math.PI*radius*radius;
}

}

