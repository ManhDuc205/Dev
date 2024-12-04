
import java.util.Scanner;
/**
 * @author DucPc
 * bai1 : KIỂU DỮ LIỆU - BIẾN - TOÁN TỬ - CẤU TRÚC RẼ NHÁNH
 */
public class Bai1 {
    public static void main(String[] args){
        int a = 100;
        long b = 10616513L;
        float PI = 3.1415926535897F;
        System.out.print("Gia tri cua a la: " + a); //println la xuong dong sau khi in 
        System.out.println(b);
        System.out.printf("Gia tri cua PI la: %.2f\n", PI);
        // Nhap du lieu
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long m = sc.nextLong();
        sc.nextLine();
        char kiTu = sc.nextLine().charAt(0);
        System.out.println("Gia tri cua n la: "+ n);
        System.out.println("Gia tri cua m la: "+ m);
        System.out.println(kiTu);
    }
}
