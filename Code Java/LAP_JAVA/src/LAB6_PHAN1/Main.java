/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB6_PHAN1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        int n;
        System.out.println("Nhap vao so luong phan so :");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        ArrayList<phanso> dsps = new ArrayList<>();
        for(int i = 0; i < n; i++){
            phanso ps = new phanso();
            System.out.println("Nhap vao phan so thu " +(i+1) +":");
            ps.nhap();
            dsps.add(ps);
        }
        for(int i = 0; i < n; i++){
            System.out.print("Phan so thu " + (i+1) + " la :");
            dsps.get(i).ktratoigian(dsps.get(i));
        }
        for(int i = 0; i < n; i++){
            
            dsps.get(i).rutgon();
            System.out.println("Phan so thu " + (i+1) + " sau khi da toi gian la:");
            dsps.get(i).xuat(dsps.get(i));
        }
    }
    
    
    
}
