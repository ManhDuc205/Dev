package LAB5;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class TEACHER extends Person {
    private String rank;
    public TEACHER(){

    }
    public TEACHER(String name, String address, String department, String rank){
        super(name, address, department);
        this.rank = rank;
    }
    @Override
    public void nhap(){
        super.nhap();
        System.out.println("Nhap cap bac: ");
        Scanner sc = new Scanner(System.in);
        sc.nextLine();
    }
    
    @Override
    public void in(){
        super.in();
        System.out.println("Cap bac: " + rank);
    }
}
