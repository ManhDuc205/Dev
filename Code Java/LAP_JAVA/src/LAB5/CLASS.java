package LAB5;

import java.util.ArrayList;

/**
 *
 * @author DucPc
 */
public class CLASS  {
    private String name;
    private ArrayList<Student> studentList;
    private int sumOfStudents;
    private TEACHER advisor;
    
    public CLASS(String name, TEACHER advisor){
        this.name = name;
        this.advisor = advisor;
        this.studentList = new ArrayList<>();
    }
    public void addStudent(Student student) {
        studentList.add(student);
    }
    public int sumOfStudents(){
        int a = studentList.size();
        return a;
    }
    public void printList(){
        System.out.println("Thong tin giao vien: ");
        System.out.println("Ten lop: " + name);
        System.out.println("GVCN: " + advisor.name);
        System.out.println("So luong sinh vien: " + sumOfStudents());
        System.out.println("Thong tin sinh vien:");
        for(Student st : studentList){
            st.print();
        }
        
    }
}
