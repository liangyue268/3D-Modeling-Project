package mod3D;

import processing.core.PApplet;

public class test extends PApplet{

	float x, y, z = 1;

	public void settings() {
		// Make sure you have a p3d to allow 3d images to work in the program
		size(1000, 500, "processing.opengl.PGraphics3D");
	}

	public void setup() {

	}

	int moveX = 0;

	public void draw() {
		background(0);
		noFill();
		stroke(255);
		pushMatrix();

		translate(width / 2, height / 2);

		// To move in X direction
		
		//translate(width / 2 + moveX, height / 2);
	    //moveX += 1;

		rotate(x, x, y, z);
		
		//scale(x, y, z);
		sphere(100);
		x += (float) 0.01;
		y += (float) 0.01;
		z += (float) 0.01;

		popMatrix();

	}

	public static void main(String[] args) {
		PApplet.main(new String[] { "mod3D.test" });
	}
	
}
