package LAB9_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Nguoi {
    private String hoten, namsinh ,quequan ;
    public void nhap(){
        System.out.println("Nhap ho ten giao vien: ");
        Scanner sc = new Scanner(System.in);
        hoten = sc.nextLine();
        System.out.println("Nhap nam sinh: ");
        namsinh = sc.nextLine();
        System.out.println("Nhap que quan: ");
        quequan = sc.nextLine();
        
    }

    public void in(){
        System.out.println("Ho ten: " + hoten);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Que quan: " + quequan);
    }
    
}
