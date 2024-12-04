package LAB8_PHAN2;

import java.util.Scanner;

public class Nguoi {
    private String hoten;
    private int tuoi, namsinh, cmnd;

    public Nguoi() {}

    public Nguoi(String hoTen, int tuoi, int namSinh, int cmnd) {
        this.hoten = hoTen;
        this.tuoi = tuoi;
        this.namsinh = namSinh;
        this.cmnd = cmnd;
    }

    public void nhap() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ho ten khach tro: ");
        hoten = sc.nextLine();
        System.out.println("Nhap tuoi: ");
        tuoi = sc.nextInt();
        System.out.println("Nhap nam sinh: ");
        namsinh = sc.nextInt();
        System.out.println("Nhap so CMND: ");
        cmnd = sc.nextInt();
    }

    public void in() {
        System.out.println("Ho va ten: " + hoten);
        System.out.println("Tuoi: " + tuoi);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("So CMND: " + cmnd);
    }
}
