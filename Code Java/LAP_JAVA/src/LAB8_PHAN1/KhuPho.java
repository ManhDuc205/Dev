
package LAB8_PHAN1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class KhuPho {
    private int sotv;
    private String sonha;
    private ArrayList<Nguoi> danhSachNguoi;
    
    public KhuPho(){
        danhSachNguoi = new ArrayList<>();
    }
    public void nhapthongtinhodan(){
        System.out.println("Nhap vao so thanh vien trong ho: ");
        Scanner sc = new Scanner(System.in);
        sotv = sc.nextInt();
        sc.nextLine();
        System.out.println("Nhap vao so nha: ");
        sonha = sc.nextLine();
        for(int i = 0; i < sotv; i++){
            System.out.println("Nhap thong tin thanh vien thu"+ (i+1) );
            Nguoi ng = new Nguoi();
            ng.nhap();
            danhSachNguoi.add(ng);
        }
    }
    
    
    public void inhodan(){
        System.out.println("So thanh vien trong ho: " + sotv);
        System.out.println("So nha: " + sonha);
        for(int i = 0; i < sotv; i++){
            danhSachNguoi.get(i).in();
        }
    }
    
}
