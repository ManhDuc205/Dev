/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LAB12_PHAN2;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void solution(ArrayList<CanBo> list, String name) {
        name.trim();
        for(CanBo o : list) {
            if(o.getHoten().trim().equalsIgnoreCase(name)) {
                System.out.println("Thong tin can bo da tim kiem: ");
                o.hienThiThongTin();
            }
        }
    }
    public static void main(String[] args) {
        ArrayList<CanBo> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Nhap so can bo: "); 
        n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            System.out.println("1. Ky su");
            System.out.println("2. Cong nhan");
            System.out.println("3. Nhan vien");
            System.out.print("Nhap loai can bo: "); int x = sc.nextInt();
            
            switch(x) {
                case 1:
                    CanBo cb1 = new KySu();
                    cb1.nhapThongTin();
                    list.add(cb1);
                    break;
                case 2:
                    CanBo cb2 = new CongNhan();
                    cb2.nhapThongTin();
                    list.add(cb2);
                    break;
                case 3:
                    CanBo cb3 = new NhanVien();
                    cb3.nhapThongTin();
                    list.add(cb3);
                    break;
                default:
            }
        }
        //list.forEach(CanBo::in);
        solution(list, "Nguyen Manh Duc");
         
    }
}
