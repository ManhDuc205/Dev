/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB12_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class CongNhan extends CanBo {
    private int bac; 
    public CongNhan(){}
    public CongNhan(String hoten, int namsinh, String gioitinh, String diachi, int bac) {
        super(hoten, namsinh, gioitinh, diachi);
        this.bac = bac;
    }

    public int getBac() {
        return bac;
    }

    public void setBac(int bac) {
        this.bac = bac;
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap bac: ");
        bac = sc.nextInt();
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("Bac: " + bac);
    }
}

