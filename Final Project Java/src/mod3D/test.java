package mod3D;

import processing.core.PApplet;
import processing.core.PVector;

public class test extends PApplet{

	float x, y, z = 1;
	Icosphere ico;

	public void settings() {
		// Make sure you have a p3d to allow 3d images to work in the program
		size(1000, 500, "processing.opengl.PGraphics3D");
	}

	public void setup() {
		ico = new Icosphere();
		
	}

	int moveX = 0;

	int sphereCenter[] = {0,0,0};
	float sphereVerts[][] = Render.Rend(new Sphere(150, null, null, sphereCenter));
	public void draw() {

		float rx = frameCount / 800.f;
		float ry = frameCount / 430.f;
		
		
		translate(width / 2, height / 2);
		background(0);
		noFill();
		stroke(255);
		strokeWeight(2);
		pushMatrix();
		rotateX(rx);
		rotateY(ry);
		for(int i=0; i < sphereVerts.length; i++){
			beginShape();
			vertex(sphereVerts[i][0], sphereVerts[i][1], sphereVerts[i][2]);
			vertex(sphereVerts[i][3], sphereVerts[i][4], sphereVerts[i][5]);
			vertex(sphereVerts[i][6], sphereVerts[i][7], sphereVerts[i][8]);
			endShape(CLOSE);
		}
		
		
		popMatrix();

	}


	public static void main(String[] args) {
		PApplet.main(new String[] { "mod3D.test" });
	}
	
}
