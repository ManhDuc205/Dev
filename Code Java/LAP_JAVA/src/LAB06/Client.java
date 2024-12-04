package LAB06;

/**
 *
 * @author DucPc
 */
public class Client {
    public static void main(String[] args) {
        Line line = new Line(10);
        Circular circular1 = new Circular(10);
        Circular circular2 = new Circular(20);
        Composite composite = new Composite();
        composite.add(line);
        composite.add(circular1);
       
        Shape[] figue = {line, circular1, circular2, composite};
        
        for(Shape shape : figue){
            shape.setColor(255);
        }
        
        for(Shape shape : figue){
            shape.rotate(90);
        }
        
        for(Shape shape : figue){
            shape.draw();
        }
        
    }
}
