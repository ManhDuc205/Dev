package thuvien;

import java.util.Scanner;

public class TaiLieu {
    private String matl;
    private String tennxb;
    private int sobanph;
    public TaiLieu() {}
    public TaiLieu(String matl, String tennxb, int sobanph){
        this.matl = matl;
        this.tennxb = tennxb;
        this.sobanph = sobanph;
    }
    public void nhapThongTin() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap ma tai lieu: ");
        matl = sc.nextLine();
        System.out.print("Nhap ten nxb: ");
        tennxb = sc.nextLine();
        sc.nextLine(); 
        System.out.print("Nhap so ban ph: ");
        sobanph = sc.nextInt();
    }
    public void inThongTin() {
        System.out.println("Ma tai lieu: " + matl);
        System.out.println("Ten nxb: " + tennxb);
        System.out.println("So ban ph: " + sobanph);
    }
}
