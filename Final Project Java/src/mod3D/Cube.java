package mod3D;
import java.awt.Color;

public class Cube extends Shape3D{

	public double length, width, height;
	
	public Cube(double l, double w, double h, Color c, double orientation[], int center[] ){
		
		super(center, c, orientation);
		
		length = l;
		width = 1;
		height = h;
		
	}
	
	
	double getVolume() {
		return length * width * height;
	}
	
	double getArea() {
		return 2 * (length * width + length * height + width * height);
	}
	//test
}
