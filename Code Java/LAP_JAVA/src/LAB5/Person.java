package LAB5;

/**
 *
 * @author DucPc
 */
public class Person {
    String name;
    private String address;
    private String department;
    public Person(String name, String address, String department) {
        this.name = name;
        this.address = address;
        this.department = department;
    }
    public void print(){
        System.out.println(name +" "+ address +" " + department);
    }
}
