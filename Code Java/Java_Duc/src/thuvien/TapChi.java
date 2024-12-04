package thuvien;

import java.util.Scanner;

public class TapChi extends TaiLieu{
    private int sophathanh;
    private int thangphathanh;
    public TapChi(){}
    public TapChi(String matl, String tennxb, int sobanph, int sophathanh, int thangphathanh){
        super(matl, tennxb, sobanph);
        this.sophathanh = sophathanh;
        this.thangphathanh = thangphathanh;
    }
    @Override
    public void nhapThongTin(){
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so phat hanh: ");
        sophathanh = sc.nextInt();
        System.out.println("Nhap thang phat hanh");
        thangphathanh = sc.nextInt();
    }
    @Override
    public void inThongTin(){
        System.out.println("so phat hanh: " + sophathanh);
        System.out.println("Nhap thang phat hanh :" + thangphathanh);
    }
}
