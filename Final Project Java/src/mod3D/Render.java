package mod3D;
import java.applet.Applet;
import java.awt.BorderLayout;
import java.awt.GraphicsConfiguration;
import java.util.Enumeration;

import javax.media.j3d.Alpha;
import javax.media.j3d.Appearance;
import javax.media.j3d.Background;
import javax.media.j3d.Behavior;
import javax.media.j3d.BoundingSphere;
import javax.media.j3d.BranchGroup;
import javax.media.j3d.Canvas3D;
import javax.media.j3d.GeometryArray;
import javax.media.j3d.Morph;
import javax.media.j3d.QuadArray;
import javax.media.j3d.Shape3D;
import javax.media.j3d.Transform3D;
import javax.media.j3d.TransformGroup;
import javax.media.j3d.WakeupOnElapsedFrames;
import processing.core.PVector;

import javax.vecmath.Color3f;
import javax.vecmath.Point3d;
import javax.vecmath.Vector3d;

import com.sun.j3d.utils.applet.MainFrame;
import com.sun.j3d.utils.universe.SimpleUniverse;


public class Render {

	Render(Shape3D[] d, int numShapes) {

	}

	int[] Rend(Cube c) {

		int e[] = {};

		return e;
	}

	int[] Rend(Cylinder c) {

		int e[] = {};

		return e;
	}

	static float[][] Rend(Sphere s) {
		Icosphere ico = new Icosphere();
		PVector f1 = new PVector();
		PVector f2 = new PVector();
		PVector f3 = new PVector();
		int counter = 0;
		float e[][] = new float[ico.vertexList.size()/9][9];
		
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
