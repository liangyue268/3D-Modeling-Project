//Author: Raya Rahman

package mod3D;

import java.awt.Color;
import java.awt.Graphics;


//Abstract class defining a shape, by it's color and center point

public abstract class Shape {

	//Made data public bc the point is to be able to manipulate these shapes	
	public int center[] = new int[3];
	
	public Color c;

	
	
	Shape( int center[], Color c){
		this.center[0] = center[0];
		this.center[1] = center[1];
		this.center[2] = center[2];
		
	}
	

}
