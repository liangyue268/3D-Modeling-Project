//Authors: Raya Rahman & Pratibha Vishwakarma. 


package mod3D;

import processing.core.PVector;

public class Render {
	//The render class returns an array of points which creates a 3D representation of Shape3D objects in the xyz plane as a sequence of triangles. 
	
	Render(Shape3D[] d, int numShapes) {

	}


	//returns an array of points which creates a 3D representation of Cylinder in the xyz plane as a sequence of triangles.
	int[] Rend(Cylinder c) {
		int e[] = {};
		return e;
	}
	

	//returns an array of points which creates a 3D representation of Cube in the xyz plane as a sequence of triangles. 
	static float[][] Rend(Cube c) {

		/*float e[][] = { { -1.0f, -1.0f, 1.0f }, { 1.0f, -1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f },
			{ -1.0f, -1.0f, -1.0f }, { -1.0f, 1.0f, -1.0f }, { 1.0f, 1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f },
				{ -1.0f, 1.0f, -1.0f }, { -1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, -1.0f },
				{ -1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, 1.0f }, { -1.0f, -1.0f, 1.0f },
				{ 1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, -1.0f, 1.0f },
				{ -1.0f, -1.0f, -1.0f }, { -1.0f, -1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f }, { -1.0f, 1.0f, -1.0f } };*/
				
		/*float e[][] ={ { -1.0f, -1.0f, 1.0f }, { 1.0f, -1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f },
				{ -1.0f, -1.0f, -1.0f }, { -1.0f, 1.0f, -1.0f }, { 1.0f, 1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f },
					{ -1.0f, 1.0f, -1.0f }, { -1.0f, -1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, -1.0f },
					{ -1.0f, -1.0f, -1.0f }, { -1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, 1.0f },
					{ -1.0f, -1.0f, -1.0f }, { 1.0f, -1.0f, -1.0f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, -1.0f, -1.0f },
					{ -1.0f, -1.0f, -1.0f }, { -1.0f, -1.0f, 1.0f }, { -1.0f, 1.0f, 1.0f }, { -1.0f, 1.0f, -1.0f } };*/
		
		float e[][]={
				      {-1.0f,-1.0f,-1.0f}, // triangle 1 : begin
				      {-1.0f,-1.0f, 1.0f},
				      {-1.0f, 1.0f, 1.0f}, // triangle 1 : end
				      {1.0f, 1.0f,-1.0f}, // triangle 2 : begin
				      {-1.0f,-1.0f,-1.0f},
				      {-1.0f, 1.0f,-1.0f}, // triangle 2 : end
				     {1.0f,-1.0f, 1.0f},
				     {-1.0f,-1.0f,-1.0f},
				     {1.0f,-1.0f,-1.0f},
				     {1.0f, 1.0f,-1.0f},
				     {1.0f,-1.0f,-1.0f},
				     {-1.0f,-1.0f,-1.0f},
				     {-1.0f,-1.0f,-1.0f},
				     {-1.0f, 1.0f, 1.0f},
				     {-1.0f, 1.0f,-1.0f},
				     {1.0f,-1.0f, 1.0f},
				     {-1.0f,-1.0f, 1.0f},
				     {-1.0f,-1.0f,-1.0f},
				     {-1.0f, 1.0f, 1.0f},
				     {-1.0f,-1.0f, 1.0f},
				     {1.0f,-1.0f, 1.0f},
				     {1.0f, 1.0f, 1.0f},
				     {1.0f,-1.0f,-1.0f},
				     {1.0f, 1.0f,-1.0f},
				     {1.0f,-1.0f,-1.0f},
				     {1.0f, 1.0f, 1.0f},
				     {1.0f,-1.0f, 1.0f},
				     {1.0f, 1.0f, 1.0f},
				     {1.0f, 1.0f,-1.0f},
				     {-1.0f, 1.0f,-1.0f},
				     {1.0f, 1.0f, 1.0f},
				     {-1.0f, 1.0f,-1.0f},
				     {-1.0f, 1.0f, 1.0f},
				     {1.0f, 1.0f, 1.0f},
				     {-1.0f, 1.0f, 1.0f},
				     {1.0f,-1.0f, 1.0f} 
				 };
		return e;
	}

	//returns an array of points which creates a 3D representation of Sphere in the xyz plane as a sequence of triangles.
	static float[][] Rend(Sphere s) {
		Icosphere ico = new Icosphere();
		PVector f1 = new PVector();
		PVector f2 = new PVector();
		PVector f3 = new PVector();
		int counter = 0;
		float e[][] = new float[ico.vertexList.size() / 9][9];

		for (int i = 0; i < ico.vertexList.size(); i += 9) {

			f1.x = (float) (ico.vertexList.get(i) * s.radius);
			f1.y = (float) (ico.vertexList.get(i + 1) * s.radius);
			f1.z = (float) (ico.vertexList.get(i + 2) * s.radius);
			f2.x = (float) (ico.vertexList.get(i + 3) * s.radius);
			f2.y = (float) (ico.vertexList.get(i + 4) * s.radius);
			f2.z = (float) (ico.vertexList.get(i + 5) * s.radius);
			f3.x = (float) (ico.vertexList.get(i + 6) * s.radius);
			f3.y = (float) (ico.vertexList.get(i + 7) * s.radius);
			f3.z = (float) (ico.vertexList.get(i + 8) * s.radius);

			e[counter][0] = f1.x;
			e[counter][1] = f1.y;
			e[counter][2] = f1.z;

			e[counter][3] = f2.x;
			e[counter][4] = f2.y;
			e[counter][5] = f2.z;

			e[counter][6] = f3.x;
			e[counter][7] = f3.y;
			e[counter][8] = f3.z;
			counter++;
		}

		return e;
	}

}

