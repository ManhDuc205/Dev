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
public class XeMay extends PTGT {
    protected int congsuat;
    @Override
    public void nhap(){
        super.nhap();
        Scanner sc=new Scanner(System.in);
        System.out.println("nhap cong suat ");
        congsuat=sc.nextInt();
    }
    @Override
     public void xuat(){
         super.xuat();
         System.out.println("Thong tin xe may: ");
         System.out.println("cong suat: "+ congsuat);
     }
}
