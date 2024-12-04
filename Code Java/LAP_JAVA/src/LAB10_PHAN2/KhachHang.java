package LAB10_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class KhachHang {
    protected String hoten, sonha, masocongto;
    public void nhap(){
        System.out.println("Nhap ho ten chu ho: ");
        Scanner sc = new Scanner(System.in);
        hoten = sc.nextLine();
        System.out.println("Nhap so nha: ");
        sonha = sc.nextLine();
        System.out.println("Nhap ma so cong to: ");
        masocongto = sc.nextLine();
    }
    
    public void in(){
        System.out.println("Ho ten chu ho: " + hoten);
        System.out.println("So nha: " + sonha);
        System.out.println("Ma so cong to: " + masocongto);
    }
}
