
package ThiDaiHoc;

import java.util.Scanner;


public class KhoiC extends TuyenSinh {
    protected float van;
    protected float su;
    protected float dia;

    public KhoiC() {
    }
    
    public KhoiC(String sobaodanh, String hoten, String diachi, int uutien, float van, float su, float dia) {
        super(sobaodanh, hoten, diachi, uutien);
        this.van = van;
        this.su = su;
        this.dia = dia;
    }
    @Override
    public void nhapThongTin(){
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap diem sv khoi C: ");
        System.out.println("Nhap diem Van: ");
        van = sc.nextFloat();
        System.out.println("Nhap diem Su: ");
        su = sc.nextFloat();
        System.out.println("Nhap diem Dia: ");
        dia = sc.nextFloat();
    }
    @Override
    public void inThongTin(){
        super.inThongTin();
        System.out.println("Diem Van: "+ van);
        System.out.println("Diem Su: " + su);
        System.out.println("Diem Dia: " + dia);    
    }
    
}
