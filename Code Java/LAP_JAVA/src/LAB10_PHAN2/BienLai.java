/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB10_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class BienLai extends KhachHang {
    protected float chisocu, chisomoi, tienphaitra;
    @Override
    public void nhap(){
        super.nhap();
        System.out.println("Nhap chi so cu: ");
        Scanner sc = new Scanner(System.in);
        chisocu = sc.nextFloat();
        System.out.println("Nhap chi so moi: ");
        chisomoi = sc.nextFloat();
        tienphaitra = (chisomoi - chisocu) *3400;
        
    }
    @Override
    public void in(){
        System.out.println("Chi so cu: " + chisocu);
        System.out.println("Chi so moi: " + chisomoi);
        System.out.println("Tien phai tra: "+ tienphaitra);
    }
}
