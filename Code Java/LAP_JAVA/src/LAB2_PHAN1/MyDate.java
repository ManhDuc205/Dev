/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB2_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class MyDate {
    private int day, month, year;
    public MyDate(){}
    public MyDate(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        day = sc.nextInt();
        month = sc.nextInt();
        year = sc.nextInt();
    
    }
    public void in(){
         System.out.printf("%02d/%02d/%d\n", day, month, year);
    }
}
