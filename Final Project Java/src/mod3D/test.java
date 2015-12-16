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

	public void draw() {

		float rx = frameCount / 800.f;
		float ry = frameCount / 430.f;
		translate(width / 2, height / 2);
		background(0);
		noFill();
		PVector f1 = new PVector();
		PVector f2 = new PVector();
		PVector f3 = new PVector();
		stroke(255);
		strokeWeight(2);
		pushMatrix();
		rotateX(rx);
		rotateY(ry);
		for (int i = 0; i < ico.vertexList.size(); i += 9) {
			f1.x = ico.vertexList.get(i) * 100;
			f1.y = ico.vertexList.get(i + 1) * 100;
			f1.z = ico.vertexList.get(i + 2) * 100;
			f2.x = ico.vertexList.get(i + 3) * 100;
			f2.y = ico.vertexList.get(i + 4) * 100;
			f2.z = ico.vertexList.get(i + 5) * 100;
			f3.x = ico.vertexList.get(i + 6) * 100;
			f3.y = ico.vertexList.get(i + 7) * 100;
			f3.z = ico.vertexList.get(i + 8) * 100;
			beginShape();
			vertex(f1.x, f1.y, f1.z);
			vertex(f2.x, f2.y, f2.z);
			vertex(f3.x, f3.y, f3.z);
			endShape(CLOSE);

		}
		popMatrix();

	}


	public static void main(String[] args) {
		PApplet.main(new String[] { "mod3D.test" });
	}
	
}
