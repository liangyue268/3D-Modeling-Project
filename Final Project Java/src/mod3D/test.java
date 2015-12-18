//Authors: Raya Rahman & Pratibha Vishwakarma. 

package mod3D;

import processing.core.PApplet;
import processing.core.PVector;

public class test extends PApplet{

	float x, y, z = 1;

	public void settings() {
		// Make sure you have a p3d to allow 3d images to work in the program
		size(1000, 500, "processing.opengl.PGraphics3D");
	}

	public void setup() {
		
	}
	
	int moveX = 0;
	int sphereCenter[] = {0,0,0};
	int cubeCenter[] = {0,0,0};
	
	float sphereVerts[][] = Render.Rend(new Sphere(180, null, null, sphereCenter));
	
	Cube cube = new Cube(100, null, null, cubeCenter);
	float cube_verts[][] = Render.Rend(cube);
	
	// Sphere and Cube Implemented
	public void draw() {

		float rx = frameCount / 800.f;
		float ry = frameCount / 430.f;
		
		translate(width / 2, height / 2);
		background(0);
		noFill();
		

		pushMatrix();
		stroke(0,255,0);
		strokeWeight(2);
		rotateX(rx);
		rotateY(ry);
		
		/// Shape for Sphere ///
		
		///*
		for(int i=0; i < sphereVerts.length; i++){
			beginShape();
			vertex(sphereVerts[i][0], sphereVerts[i][1], sphereVerts[i][2]);
			vertex(sphereVerts[i][3], sphereVerts[i][4], sphereVerts[i][5]);
			vertex(sphereVerts[i][6], sphereVerts[i][7], sphereVerts[i][8]);
			endShape(CLOSE);
		}
		//*/
		
		/// Shape for Sphere ///
		
		/// Shape for Cube ///
		/*
		beginShape();
		stroke(255, 0 ,0);
		strokeWeight(2);
		for(int i = 0; i < cube_verts.length ; i++){
			vertex(cube_verts[i][0] * cube.side , cube_verts[i][1] * cube.side, cube_verts[i][2] *cube.side);
		}
		endShape();
		*/
		/// Shape for Cube ///
		
		popMatrix();

		
	}


	public static void main(String[] args) {
		PApplet.main(new String[] { "mod3D.test" });
	}
	
}