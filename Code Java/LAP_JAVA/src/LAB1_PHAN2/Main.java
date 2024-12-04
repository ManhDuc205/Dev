/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB1_PHAN2;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        UCLN x = new UCLN();
        System.out.println("UCLN la: " + x.gcd(a, b));
        int n = sc.nextInt();
        System.out.println("So Fibonacci thu " + n + " la: " + x.fibonacci(n));
        sc.close();
        
    }
}
