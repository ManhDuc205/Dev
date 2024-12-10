package LAB12_PHAN2;

import java.util.Scanner;

class KySu extends CanBo {
    private String nganhDaoTao;
    public KySu(){}
    public KySu(String hoten, int namsinh, String gioitinh, String diachi, String nganhDaoTao) {
        super(hoten, namsinh, gioitinh, diachi);
        this.nganhDaoTao = nganhDaoTao;
    }

    public String getNganhDaoTao() {
        return nganhDaoTao;
    }

    public void setNganhDaoTao(String nganhDaoTao) {
        this.nganhDaoTao = nganhDaoTao;
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap nganh dao tao: ");
        nganhDaoTao = sc.nextLine();
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("Nganh dao tao: " + nganhDaoTao);
    }
}

