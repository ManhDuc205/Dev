package LAB1_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Phan1 { 
    String hoten, masv, lop, diachi, email;
    
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        hoten = sc.nextLine();
        masv = sc.nextLine();
        lop = sc.nextLine();
        diachi = sc.nextLine();
        email = sc.nextLine();
        sc.close();
    }    
    public void in() {
        System.out.println(hoten + '\t' + masv + '\t' + lop + '\t' + diachi + '\t' + email);
        for(int i = 9 ; i > 0; i--){
            System.out.printf("%d bottles of beer on the wall, %d bottles of beer.\n ", i , i);
            System.out.println("Take one down, pass it around, ");
        }
        System.out.println("No more bottles of beer on the wall.");
    }
    public static void main(String[] args) {
        Phan1 x = new Phan1();
        x.nhap();
        x.in();
    }
}
/*
Nguyen Manh Duc
74DCTT22045
74DCTT23
Ha Noi
nguyenducqo@gmail.com
*/
