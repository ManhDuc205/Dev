
package ThiDaiHoc;

import java.util.ArrayList;
import java.util.Scanner;

public class TuyenSinh {
    protected String sobaodanh;
    protected String hoten;
    protected String diachi;
    protected int uutien;

    public TuyenSinh() {
    }
    
    public TuyenSinh(String sobaodanh, String hoten, String diachi, int uutien){
        this.sobaodanh = sobaodanh;
        this.hoten = hoten;
        this.diachi= diachi;
        this.uutien = uutien;
    }
    public void nhapThongTin(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so bao danh: ");
        sobaodanh = sc.nextLine();
        System.out.println("Nhap ho ten: ");
        hoten = sc.nextLine();
        System.out.println("Nhap dia chi: ");
        diachi = sc.nextLine();
        System.out.println("Uu Tien: ");
        uutien = Integer.parseInt(sc.nextLine());
    }
    public void inThongTin(){
        System.out.println("So bao danh: " + sobaodanh);
        System.out.println("Ho ten: "+ hoten);
        System.out.println("Dia chi: " + diachi);
        System.out.println("Uu Tien: " + uutien);
    }
    public static void main(String[] args) {
        ArrayList<TuyenSinh> ds = new ArrayList<>();
        TuyenSinh khoiA = new KhoiA();
        khoiA.nhapThongTin();
        ds.add(khoiA);
        
        TuyenSinh khoiB = new KhoiB();
        khoiB.nhapThongTin();
        ds.add(khoiB);
        
        TuyenSinh khoic = new KhoiC();
        khoic.nhapThongTin();
        ds.add(khoic);
        
        System.out.println("Thong tin thi sinh:");
        for (TuyenSinh ts : ds ) {
            ts.inThongTin();
            System.out.println(" ");
        }
        System.out.println("Nhap sbd muon tim kiem: ");
        String sobd = new Scanner(System.in).nextLine();
        boolean found = false;
        for (TuyenSinh ts : ds ) {
        if (ts.sobaodanh.equalsIgnoreCase(sobd)) {
            System.out.println("Thông tin thí sinh tìm thấy:");
            ts.inThongTin();
            found = true;
            break;
            }
        }

        if (!found) {
        System.out.println("Không tìm thấy thí sinh với số báo danh: " + sobd);
        }
        
    }
}
