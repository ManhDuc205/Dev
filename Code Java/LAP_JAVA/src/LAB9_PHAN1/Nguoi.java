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
public class Nguoi {
    private String hoten, quequan;

    public String getQuequan() {
        return quequan;
    }
    private int tuoi, namsinh;

    public int getNamsinh() {
        return namsinh;
    }
    public void nhap(){
        System.out.println("Nhap ho ten: ");
        Scanner sc = new Scanner(System.in);
        hoten = sc.nextLine();
        System.out.println("Nhap tuoi: ");
        tuoi = sc.nextInt();
        System.out.println("Nhap nam sinh: ");
        namsinh = sc.nextInt();
        System.out.println("Que quan: ");
        sc.nextLine();
        quequan = sc.nextLine();     
    }
    public void in(){
        System.out.println("Ho ten: " + hoten);
        System.out.println("Tuoi: " + tuoi);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Que quan: " + quequan);
        
    }
    
}
