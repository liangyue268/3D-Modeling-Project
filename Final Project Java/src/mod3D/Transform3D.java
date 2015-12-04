package mod3D;

public class Transform3D {
	
	public Transform3D(Shape3D [] d, int trans[], int Orientation[], double scale, int numShapes){
		
		for(int i = 0 ; i < numShapes ; i++){
			
			Translate(d[i], trans[0], trans[1], trans[2]);
			
			OrienationChange(d[i], Orientation[0], Orientation[1], Orientation[2]);
			
			Scale(d[i], scale);
				
			
			
		}
		
	}
	

	
	void Translate(Shape3D s, int transx, int transy, int transz){

		s.center[0] = s.center[0]+transx;
		s.center[1] = s.center[1]+transy;
		s.center[2] = s.center[2]+transz;
	
}
	void OrienationChange (Shape3D s, int x, int y, int z){

		s.orientation[0] = x;
		s.orientation[1] = y;
		s.orientation[2] = z;
	}
	
	
	void Scale(Sphere p, double s )	{  //Pass the method a Sphere and a scale double

		p.radius = s*p.radius;

	}
	
	void Scale(Cube c, double s){ //Pass the method a cube and a scale double.

		c.length = s*c.length;
		c.width = s*c.width;
		c.height = s*c.height;

	}
	
	void Scale(Cylinder c, double s){//Pass the method a cube and a scale double

		 c.radius  = s*c.radius;
		 c.height = s*c.height;

		}
	
}
