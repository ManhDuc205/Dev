package LAB06;

/**
 *
 * @author DucPc
 */
public class Line extends Shape {
    private int length;
    private int color;
    
    public Line(int length){
        this.length = length;
    }
    
    public int getLength() {
        return length;
    }
        
    @Override
    public void setColor(int color){
        this.color = color;
        System.out.println("Cai dat mau cua duong line sang: " + color);
    }
    
    @Override
    public void draw(){
        System.out.println("doi mau duong line: "+ length);
    }
    
    @Override
    public void rotate(int angle){
        System.out.println("xoay duong line mot goc: " + angle + " do");
    }
    
    @Override
    public void moveLeft(int point){
        System.out.println("dich trai duong line sang diem: " + point);
    }
}
