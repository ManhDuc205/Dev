package LAB5;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Student extends Person {
    private String exclass;
    public Student(){
        
    }
    public Student(String name, String address, String department, String exclass){
        super(name, address, department);
        this.exclass = exclass;
    }
    
    public String getexclass(){
        return exclass;
    }
    
    public void nhap(CLASS exclass){
        super.nhap();
        this.exclass = exclass;
        
    }
            
    @Override
    public void in(){
        super.in();
        System.out.println("Lop: " + exclass.getName());
    }
}
