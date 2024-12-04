package LAB06;

/**
 *
 * @author DucPc
 */
public class Circular extends Shape {
    private int color;    
    private float r;
    
    public Circular(float r){
        this.r = r;
    }
    
    public double getArea() {
        return Math.PI * r * r;
    }
    
    @Override
    public void setColor(int color) {
        this.color = color;
        System.out.println("Cai dat mau cua hinh tron sang: " + color);
    }
    
    @Override
    public void draw(){
        System.out.println("doi mau hinh tron: "+ r);
    }
    @Override
    public void rotate(int angle){
        System.out.println("Xoay hinh tron mot goc " + angle + "do");
    }
    @Override
    public void moveLeft(int point){
        System.out.println("Dịch trai hinh tron sang diem " + point);
    }
}
