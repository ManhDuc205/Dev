
package LAB12_PHAN2;

import java.util.Scanner;

class NhanVien extends CanBo {
    private String congViec;

    public NhanVien(){}

    public NhanVien(String hoten, int namsinh, String gioitinh, String diachi, String congViec) {
        super(hoten, namsinh, gioitinh, diachi);
        this.congViec = congViec;
    }

    public String getCongViec() {
        return congViec;
    }

    public void setCongViec(String congViec) {
        this.congViec = congViec;
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap cong viec: ");
        congViec = sc.nextLine();
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("Cong viec: " + congViec);
    }
}
