package thuvien;

import java.util.Scanner;

public class Sach extends TaiLieu {
    private String tentg;
    private int sotrang;
    public Sach(){}
    public Sach(String matl, String tennxb, int sobanph, String tentg, int sotrang){
        super(matl, tennxb, sobanph);
        this.tentg = tentg;
        this.sotrang = sotrang;
    }
    @Override
    public void nhapThongTin(){
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap tentg: ");
        tentg = sc.nextLine();
        System.out.println("Nhap so trang");
        sotrang = sc.nextInt();
    }
    @Override
    public void inThongTin(){
        System.out.println("tentg: " + tentg);
        System.out.println("So trang" + sotrang);
    }
}
