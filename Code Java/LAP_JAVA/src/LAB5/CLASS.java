package LAB5;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class CLASS  {
    private String name;
    private ArrayList<Student> studentList;
    private int sumOfStudents;
    private TEACHER advisor;
    public CLASS(){
    
    }
    public String getName(){
        return name;
    }
    public void nhap(){
        System.out.println("Nhap ten lop: ");
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        System.out.println("Nhap thong tin giao vien chu nhiem: ");
        advisor = new TEACHER();
        advisor.nhap();
        
        System.out.println("Nhap so luong hoc sinh của lop " + name);
        int countStudents = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < countStudents; i++){
            System.out.println("Nhap thong tin cho sinh vien thu " +(i + 1)+ ": ");
            Student st = new Student();
            st.nhap(this);
            studentList.add(st);
        }
   }
    
    public void addStudent(Student student) {
        studentList.add(student);
    }
    public int sumOfStudents(){
        int a = studentList.size();
        return a;
    }
    public void in(){
        System.out.println("Thong tin giao vien: ");
        System.out.println("Ten lop: " + name);
        System.out.println("GVCN: " + advisor.name);
        System.out.println("So luong sinh vien: " + sumOfStudents());
        System.out.println("Thong tin sinh vien:");
        for(Student s : studentList){
            s.in();
        }
    }
}
