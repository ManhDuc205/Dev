package LAB9_PHAN2;

import java.util.ArrayList;
import java.util.Scanner;


/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        ArrayList<CBNV> a = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so luong giao vien : ");
        int n;
        n = sc.nextInt();
        CBNV nv = new CBNV();
        for(int i = 0; i < n ; i++){
            nv.nhap();
            a.add(nv);
        }
        System.out.println("Thong tin giao vien:");
        for(CBNV x : a){
            x.in();
            System.out.println("Luong thuc nhan : " + x.luongnhan());
        }
        
        
    }
}
