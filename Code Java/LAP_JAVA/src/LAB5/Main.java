package LAB5;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        TEACHER teacher = new TEACHER("Bui Thi Nhu", "Ha Noi","Mang may tinh va truyen thong", "ThS");
        
        CLASS lop = new CLASS("74DCTT23", teacher);
        
        Student st1 = new Student("Nguyen Manh Duc", "Ha Noi","CNTT", "74DCTT23");
        Student st2 = new Student("Nguyen Van A", "Ho Chi Minh", "HTTT", "74DCHT22");
        
        lop.addStudent(st1);
        lop.addStudent(st2);
        
        lop.printList();
        
    }
}
