//Pratibha Vishwakarma



package mod3D;
import java.awt.Color;


//class Cube Represents a cube shape, is a child of class Shape3D
public class Cube extends Shape3D{

	public float side;
	public double length;
	public double width;
	public double height;
	//Defines a cube by all parameters of a Shape3D along with length, width and height.
	public Cube(float side, Color c, double orientation[], int center[] ){
		
		super(center, c, orientation);
		this.side = side;
		
	}
	
	//Returns the volume of the cube
	float getVolume() {
		return this.side  * this.side  * this.side;
	}
	
	//Returns the area of the cube
	float getArea() {
		return 2 * (this.side  * this.side + this.side  * this.side  + this.side  * this.side);
	}
}

