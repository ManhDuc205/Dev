package LAB5;

/**
 *
 * @author DucPc
 */
public class Student extends Person {
    private String exclass;
    public Student(String name, String address, String department, String exclass){
        super(name, address, department);
        this.exclass = exclass;
    }
    public String getexclass(){
        return exclass;
    }
    @Override
    public void print(){
        super.print();
        System.out.println("Lop: " + exclass);
    }
}
