package LAB5;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Person {
    String name;
    private String address;
    private String department;
    public Person(){
        
    }
    public Person(String name, String address, String department) {
        this.name = name;
        this.address = address;
        this.department = department;
    }
    public void nhap(){
        System.out.println("Nhap ho ten: ");
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        System.out.println("Nhap dia chi: ");
        address = sc.nextLine();
        System.out.println("Nhap bo mon: ");
        department = sc.nextLine();
        
    }
    public void in() {
        System.out.println("Ten: " + name);
        System.out.println("Đia chi: " + address);
        System.out.println("Bo mon: " + department);
    }
}
