
package Phanso;

public class main {
    public static void main(String[] args) {
        phanso ps1 = new phanso(1, 2); 
        phanso ps2 = new phanso(2, 3); 
        phanso kq = new phanso();
        System.out.print("Tong la: ");
        kq.xuat(kq.cong(ps1,ps2));
        System.out.print("Hieu la: ");
        kq.xuat(kq.hieu(ps1,ps2));
        System.out.print("Tich la: ");
        kq.xuat(kq.tich(ps1,ps2));
        System.out.print("Thuong la: ");
        kq.xuat(kq.thuong(ps1,ps2));
    }
}
