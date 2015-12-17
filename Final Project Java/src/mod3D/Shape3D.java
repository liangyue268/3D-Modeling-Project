//Author: Christopher Coyle

package mod3D;

import java.awt.Color;

//class Shape3D represents all 3D shapes; it is a child of class Shape
//A Shape3D is defined by all parameters of a shape with the addition of an orientation vector, which determines what direction the 3DShape is pointing
public abstract class Shape3D extends Shape{
	
	public double orientation[] = new double[3];
	public Object radius;
		
	public Shape3D (int center[], Color c , double oreintation[] ){
		
		super(center, c);
		this.orientation[0] = orientation[0];
		this.orientation[1] = orientation[1];
		this.orientation[2] = orientation[2];
		
		
	}
	
}
