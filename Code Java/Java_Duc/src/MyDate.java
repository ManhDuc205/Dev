
import java.util.Scanner;

public class MyDate {
private
        int date, month, year;
public MyDate(){}
public MyDate(int date, int month, int year){
    this.date = date;
    this.month = month;
    this.year = year;
}
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        date = sc.nextInt();
        month = sc.nextInt();
        year = sc.nextInt();
    
    }
    public void in(){
        System.out.print(date);
        System.out.print(month);
        System.out.print(year);
    }

}

