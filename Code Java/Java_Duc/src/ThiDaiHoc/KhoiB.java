package ThiDaiHoc;

import java.util.Scanner;

public class KhoiB extends TuyenSinh {
    private float toan;
    private float sinh;
    private float hoa;

    public KhoiB() {
    }

    public KhoiB(String sobaodanh, String hoten, String diachi, int uutien, float toan, float hoa, float sinh) {
        super(sobaodanh, hoten, diachi, uutien);
        this.toan = toan;
        this.hoa = hoa;
        this.sinh = sinh;
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap diem sv khoi B: ");
        System.out.println("Nhap diem Toan: ");
        toan = sc.nextFloat();
        System.out.println("Nhap diem Hoa: ");
        hoa = sc.nextFloat();
        System.out.println("Nhap diem Sinh: ");
        sinh = sc.nextFloat();
    }

    @Override
    public void inThongTin() {
        super.inThongTin();
        System.out.println("Diem Toan: " + toan);
        System.out.println("Diem Hoa: " + hoa);
        System.out.println("Diem Sinh: " + sinh);
    }
}
