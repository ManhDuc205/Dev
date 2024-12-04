/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB9_PHAN1;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        HSHOCSINH[] a = new HSHOCSINH[n];
        for(int i = 0 ; i < n; i++){
            a[i] = new HSHOCSINH();
            a[i].nhap();
        }
        for(int i = 0 ; i < n; i++){
            a[i].in();
        }
        System.out.println("Hoc sinh sinh nam 1985 la: ");
        for(int i = 0; i < n; i++){
            if(a[i].getNamsinh() == 1985){
                
                a[i].in();
            } 
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if( a[i].getNamsinh() == 1985 && a[i].getQuequan().equalsIgnoreCase("Thai Nguyen") ){
                count++;
            } 
        }
        System.out.println("Co " + count + " hoc sinh sinh nam 1985 co que Thai Nguyen");
        
        
        
    }
}
