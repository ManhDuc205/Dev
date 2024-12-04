package LAB10_PHAN1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        int n;
        System.out.println("Nhap so luong sinh vien: ");
        Scanner sc = new Scanner(System.in);
        n= sc.nextInt();
        ArrayList<TheMuon> tm = new ArrayList<>();
        for(int i = 0; i < n ; i++){
            System.out.println("Nhap thong tin sinh vien thu " + (i+1) + ": ");
            TheMuon s = new TheMuon();
            s.nhap();
            tm.add(s);
        }
        for(int i = 0; i < n; i++){
            System.out.println("Thong tin sinh vien thu " + (i+1));
            tm.get(i).in();
        }
    }
}
