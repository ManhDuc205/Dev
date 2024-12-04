/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package KeThua;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Employee extends Person {
    float salary;
    public void setSalary(float s){
        salary = s;
    }
    public String getDetail(){
        return getName() + salary;
    }
    public void nhap(){
        super.nhap();
        Scanner sc = new Scanner(System.in);
        salary = Float.parseFloat(sc.nextLine());
    }
}
