package mod3D;

import java.io.IOException;
import java.nio.file.Paths;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.scene.paint.Color;

/**
 *
 * @author Michael Hoffer &lt;info@michaelhoffer.de&gt;
 */
public class Main {

    public static void main(String[] args) throws IOException {

        // we use cube and sphere as base geometries
        CSG cube = new Cube(2).toCSG().color(Color.RED);
        CSG sphere = new Sphere(1.25).toCSG().color(Color.BLUE);
        CSG cyl = new Cylinder(0.5,3,16).toCSG().transformed(Transform.unity().translateZ(-1.5)).color(Color.GREEN);
        CSG cyl2 = cyl.transformed(Transform.unity().rotY(90));
        CSG cyl3 = cyl.transformed(Transform.unity().rotX(90));
        
        // perform union, difference and intersection
        CSG cubePlusSphere = cube.union(sphere);
        CSG cubeMinusSphere = cube.difference(sphere);
        CSG cubeIntersectSphere = cube.intersect(sphere);
        CSG cubeIntersectSphereCyl = cubeIntersectSphere.difference(cyl).difference(cyl2).difference(cyl3);

        // translate geometries to prevent overlapping 
        CSG union = cube.
                union(sphere.transformed(Transform.unity().translateX(3))).
                union(cyl.transformed(Transform.unity().translateX(6))).
                union(cubePlusSphere.transformed(Transform.unity().translateX(9))).
                union(cubeMinusSphere.transformed(Transform.unity().translateX(12))).
                union(cubeIntersectSphere.transformed(Transform.unity().translateX(15))).
                union(cubeIntersectSphereCyl.transformed(Transform.unity().translateX(18)));
        
        FileUtil.write(Paths.get("sample.stl"), union.toStlString());
        
        union.toObj().toFiles(Paths.get("sample-color.obj"));

    }
}
