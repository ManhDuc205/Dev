// bat dau thay doi
package LAB06;

import java.util.ArrayList;

/**
 *
 * @author DucPc
 */
public class Composite extends Shape {
    private int color;
    private int id;
    
    private ArrayList<Shape> s = new ArrayList<>();
    
    @Override
    public void draw() {
        for(Shape shape : s){
            shape.draw();
        }
    }    
    
    @Override
    public void rotate(int angle){
        for(Shape shape : s){
            shape.rotate(angle);
        }
    }
    
    @Override
    public void moveLeft(int point){
        for(Shape shape : s){
            shape.moveLeft(point);
        }
    }
    
    @Override
    public void setColor(int color){
        for(Shape shape : s){
            shape.setColor(color);
        }
    }
    
    public void add(Shape shape){
        s.add(shape);
    }
    
    public void remove(Shape shape){
        s.remove(shape);
    }
    public Shape getChild(int id) {       
            return s.get(id);
        
    }
}
