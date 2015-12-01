package mod3D;

import java.awt.Graphics;



public abstract class Shape {
	private int x, y, z, color, theta;
	
	private void print(){}
	
	public void getcolor(){}
	
	public void setcolor(){}
	
	public abstract void translate(int x, int y, int z);
	
	public abstract void rotate(int theta, int x, int y, int z);
	
	public abstract void scale(int x, int y, int z);
	
	
	public abstract void union(int x, int y, int z);
	
	public abstract void substract(int x, int y, int z);
	
	public abstract void intersect(int x, int y, int z);
	
	

}
