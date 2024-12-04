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
public class Oto extends PTGT {
    protected int sochongoi;
    protected String kieuDongco;
    
    @Override
    public void nhap(){
        super.nhap();
        Scanner sc=new Scanner(System.in);
        System.out.println("nhap so cho ngoi ");
        sochongoi=sc.nextInt();
        sc.nextLine();
        System.out.println(" nhap kieu dong co ");
        kieuDongco=sc.nextLine();
        
    }
    @Override
    public void xuat(){
        super.xuat();
        System.out.println("Thong tin o to: ");
        System.out.println("so cho ngoi: " + sochongoi);
        System.out.println(" kieu dong co: " + kieuDongco);
    }
}
