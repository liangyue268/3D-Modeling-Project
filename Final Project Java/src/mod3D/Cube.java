package mod3D;
import java.awt.Color;

public class Cube extends Shape3D{

	public float side;
	
	public Cube(float side, Color c, double orientation[], int center[] ){
		
		super(center, c, orientation);
		this.side = side;
		
	}
	float getVolume() {
		return this.side  * this.side  * this.side;
	}
	
	float getArea() {
		return 2 * (this.side  * this.side + this.side  * this.side  + this.side  * this.side);
	}
}
