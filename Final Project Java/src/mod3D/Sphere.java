package mod3D;
import java.awt.Color;

public class Sphere extends Shape3D {

public double radius;

public Sphere(double r, double orientation[], Color c, int center[]){
	super(center, c, orientation);
	radius = r;


}
double getVolume(){
	return (4/3)*Math.PI*radius*radius*radius;

}


double getArea(){
	return 4*Math.PI*radius*radius;
}

}

