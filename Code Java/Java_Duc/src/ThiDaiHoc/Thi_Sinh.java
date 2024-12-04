/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThiDaiHoc;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Thi_sinh {
    String sbd, hoten, diachi;
    int uu_tien;
    public void nhap(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Nhap so bao danh:"); sbd=sc.nextLine();
        System.out.println("Nhap ho ten:"); hoten=sc.nextLine();
        System.out.println("Nhap dia chi:"); diachi=sc.nextLine();
        System.out.println("Nhap uu tien:"); 
        uu_tien=Integer.parseInt(sc.nextLine());
    }
    public void xuat(){
        System.out.println("So bao danh:"+sbd+"\nHo ten:"+ hoten);
        System.out.println("Dia chi:"+ diachi+"\nUu tien:"+ uu_tien);
    }  
}
