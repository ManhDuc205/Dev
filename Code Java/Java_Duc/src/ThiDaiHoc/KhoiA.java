
package ThiDaiHoc;

import java.util.Scanner;

public class KhoiA extends TuyenSinh {
    protected float toan;
    protected float ly;
    protected float hoa;

    public KhoiA() {
    }
    
    public KhoiA(String sobaodanh, String hoten, String diachi, int uutien, float toan, float ly, float hoa) {
        super(sobaodanh, hoten, diachi, uutien);
        this.toan = toan;
        this.hoa = hoa;
        this.ly = ly;
    }
    @Override
    public void nhapThongTin(){
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap diem khoi A: ");
        System.out.println("Nhap diem Toan: ");
        toan = sc.nextFloat();
        System.out.println("Nhap diem Ly: ");
        ly = sc.nextFloat();
        System.out.println("Nhap diem Hoa: ");
        hoa = sc.nextFloat();
    }
    
    
    @Override
    public void inThongTin(){
        super.inThongTin();
        System.out.println("Diem Toan: "+ toan);
        System.out.println("Diem Ly: " + ly);
        System.out.println("Diem Hoa: " + hoa);
        
    }
   
}
