//Pratibha Vishwakarma

package mod3D;
import java.awt.Color;

//class Cube Represents a cube shape, is a child of class Shape3D
public class Cube extends Shape3D{

	public double length, width, height;

	//Defines a cube by all parameters of a Shape3D along with length, width and height.
	public Cube(double l, double w, double h, Color c, double orientation[], int center[] ){
		
		super(center, c, orientation);
		
		length = l;
		width = w;
		height = h;
		
	}
	
	//Returns the volume of the cube
	double getVolume() {
		return length * width * height;
	}
	
	//Returns the area of the cube
	double getArea() {
		return 2 * (length * width + length * height + width * height);
	}
	
}
