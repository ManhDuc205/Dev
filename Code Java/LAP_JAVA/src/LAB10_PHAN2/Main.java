
package LAB10_PHAN2;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        int n;
        System.out.println("Nhap so bien lai: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        ArrayList<BienLai> bl = new ArrayList<>();
        for(int i = 0; i < n ; i++){
            System.out.println("Nhap thong tin bien lai thu "+ (i + 1) + ": ");
            BienLai b = new BienLai();
            b.nhap();
            bl.add(b);
        }
        for(int i = 0; i < n ; i++){
            System.out.println("Thong tin bien lai thu " + (i+1) + ": ");
            bl.get(i).in();
        }
    }
}
