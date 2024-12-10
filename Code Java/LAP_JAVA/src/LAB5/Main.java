package LAB5;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Main {
    public static void main(String[] args) {
        ArrayList<CLASS> ClassList = new ArrayList<>();
        int n;
        System.out.println("Nhap so luong lop hoc: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < n; i++){
            CLASS lop = new CLASS();
            lop.nhap();
            ClassList.add(lop);
        }
        for(int i = 0; i < n; i++){
            ClassList.get(i).in();
        }
        
        
    }
}
