package LAB2_PHAN1;

public class Main {
    public static void main(String[] args) {
        MyDate date1 = new MyDate();
        System.out.println("Nhap ngay thang nam cho date1:");
        date1.nhap();
        date1.in();

        MyDate date2 = new MyDate(15, 11, 2024);
        date2.in();
    }
}
