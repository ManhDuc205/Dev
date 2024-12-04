    /*
lương cứng,
thướng, phạt, lương thực lĩnh
 */
package LAB9_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class CBNV extends Nguoi {
    private int luongcung, thuong,phat, luongthuclinh;
    
    @Override
    public void nhap(){
        super.nhap();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap luong cung: ");
        luongcung = sc.nextInt();
        System.out.println("Nhap luong thuong: ");
        thuong = sc.nextInt();
        System.out.println("Nhap tien phat: ");
        phat = sc.nextInt();
        
    }
    
    @Override
    public void in(){
        super.in();
        System.out.println("Luong cung: " + luongcung);
        System.out.println("Luong thuong: " + thuong);
        System.out.println("Tien phat: " + phat);
        
    }

    public int getLuongcung() {
        return luongcung;
    }

    public int getThuong() {
        return thuong;
    }

    public int getPhat() {
        return phat;
    }

    public void setLuongthuclinh(int luongthuclinh) {
        this.luongthuclinh = luongthuclinh;
    }
    
    public int luongnhan(){
        luongthuclinh = luongcung +thuong - phat;
        return luongthuclinh;
    }
}
