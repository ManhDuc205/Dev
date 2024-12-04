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
public class XeTai extends PTGT {
    public class Xetai extends PTGT {
    protected int trongtai;
    @Override
    public void nhap(){
        super.nhap();
        Scanner sc=new Scanner(System.in);
        System.out.println("nhap trong tai ");
        trongtai=sc.nextInt();
    }
    @Override
     public void xuat(){
         super.xuat();
         System.out.println("Thong tin xe tai: ");
         System.out.println("trong tai: "+ trongtai );
     }
}
}
