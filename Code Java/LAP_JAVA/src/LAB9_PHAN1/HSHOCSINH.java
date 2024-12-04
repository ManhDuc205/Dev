/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB9_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class HSHOCSINH extends Nguoi {
    private String lop, khoahoc;
    private int kyhoc;
    
    @Override
    public void nhap(){
        super.nhap();
        System.out.println("Nhap ten lop: ");
        Scanner sc = new Scanner(System.in);
        lop = sc.nextLine();
        System.out.println("Nhap ten khoa hoc: ");
        khoahoc = sc.nextLine();
        System.out.println("Nhap ki hoc: ");
        kyhoc = sc.nextInt();
               
    }
    @Override
    public void in(){
        super.in();
        System.out.println("Lop : " + lop);
        System.out.println("Khoa hoc: " + khoahoc);
        System.out.println("Ky hoc  : " + kyhoc);
    }
}
