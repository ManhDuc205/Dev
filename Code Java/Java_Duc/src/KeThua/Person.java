
package KeThua;
import java.util.Scanner;

public class Person {
    String name, birthday;
    Person(){}
    Person(String name, String birthday){
        this.name = name;
        this.birthday = birthday;
    }
    public void setName(String n){
        name = n;
    }
    public String getName(){
        return name;
    }
    public void setBirthday(String b){
        birthday = b;
    }
    public String getBirthday(){
        return birthday;
    }
    public String getdetail(){
        return name + " " + birthday;
    }
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ho ten: ");
        name = sc.nextLine();
        System.out.println("Nhap ngay sinh");
        birthday = sc.nextLine(); 
    }
    public static void main(String[] args) {
        Person p1 = new Person("Nguyen Manh Duc", "26/03/2005");
        System.out.println("ho ten: " + p1.getName());
        System.out.println("ngaysinh: " + p1.getBirthday());
    }
}
