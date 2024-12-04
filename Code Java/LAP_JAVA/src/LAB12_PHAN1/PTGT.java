/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB12_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class PTGT {
    protected String hangsx , mau ;
    protected int namsx;
    protected float giaban;
    public void nhap(){
        System.out.println("Nhap hang san xuat: ");
        Scanner sc = new Scanner(System.in);
        hangsx = sc.nextLine();
        System.out.println("Nhap nam san xuat: ");
        namsx = sc.nextInt();
        System.out.println("Nhap gia ban: ");
        giaban = sc.nextFloat();
        sc.nextLine();
        System.out.println("Nhap mau: ");
        mau = sc.nextLine();
    }
    public void xuat(){
        System.out.println("Hang san xuat: " + hangsx);
        System.out.println("Nam san xuat: " + namsx);
        System.out.println("Gia ban: " + giaban);
    }
}
