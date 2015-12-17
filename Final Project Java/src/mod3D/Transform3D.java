//Author: Christopher Coyle

package mod3D;


//a Transform3D object is passed an array of Shape3D objects, upon which it will apply designated transformations
//the purpose for this is to be able to apply designated changes to multiple Shape3D objects at once.
public class Transform3D {
	Shape3D shape3D;
	
	//To create a Transform3D object the constructor is passed an array of objects, a translation array (containing an x, y and z translation), 
	//an Orientation array (containing a new xyz orientation vector), a scale factor, and the number of shapes.
	public Transform3D(Shape3D[] d, int trans[], int Orientation[], double scale, int numShapes){
		
		//Transformations are made by calling the methods translate, changeOrientation and	scale.
		for(int i = 0 ; i < numShapes ; i++){
			
			Translate(d[i], trans[0], trans[1], trans[2]);
			
			OrienationChange(d[i], Orientation[0], Orientation[1], Orientation[2]);
			
			// Statement below was showing error. Check if its the correct way
			// Scale(d[i], scale);
			Scale( (Sphere) d[i], scale);
		}
		
	}
	

	//Translate method adds int values to the center array containing the x, y and z position of the Shape3D object
	void Translate(Shape3D s, int transx, int transy, int transz){

		s.center[0] = s.center[0]+transx;
		s.center[1] = s.center[1]+transy;
		s.center[2] = s.center[2]+transz;
	
}
	
	//OrientationChange method gives the Shape3D a new orientation
	void OrienationChange (Shape3D s, int x, int y, int z){

		s.orientation[0] = x;
		s.orientation[1] = y;
		s.orientation[2] = z;
	}
	
	
	//There is a different Scale method for Spheres, Cubes and Cylinders
	
	//a Sphere is scaled by multiplying the radius by a factor of s. 
	void Scale(Sphere p, double s )	{  //Pass the method a Sphere and a scale double

		p.radius = s*p.radius;

	}
	
	//a Cube is scaled by multiplying the length, width and height each by a factor of s. 
	void Scale(Cube c, double s){ //Pass the method a cube and a scale double.

		c.length = s*c.length;
		c.width = s*c.width;
		c.height = s*c.height;

	}
	
	//a Cylinder is scaled by multiplying th height and radius by a factor of s. 
	void Scale(Cylinder c, double s){//Pass the method a cube and a scale double

		 c.radius  = s*c.radius;
		 c.height = s*c.height;

		}
	
}
