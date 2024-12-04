package thuvien;

import java.util.Scanner;

public class Bao extends TaiLieu {
    private int ngayphathanh;
    public Bao(){}
    public Bao(String matl, String tennxb, int sobanph, int ngayphathanh){
        super(matl, tennxb, sobanph);
        this.ngayphathanh = ngayphathanh;
    }
    
    @Override
    public void nhapThongTin(){
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ngay phat hanh: ");
        ngayphathanh = sc.nextInt();
    }
    @Override
    public void inThongTin(){
        System.out.println("ngay phat hanh: " + ngayphathanh);
    }
}
