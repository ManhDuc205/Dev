package LAB5;

/**
 *
 * @author DucPc
 */
public class TEACHER extends Person {
    private String rank;
    public TEACHER(String name, String address, String department, String rank){
        super(name, address, department);
        this.rank = rank;
    }
    @Override
    public void print(){
        super.print();
        System.out.println("Cap bac: " + rank);
    }
}
