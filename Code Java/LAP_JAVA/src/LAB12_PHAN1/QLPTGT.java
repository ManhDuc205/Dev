package LAB12_PHAN1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class QLPTGT {
    public static void main(String[] args) {
        int n;
        System.out.println("Nhap vao so xe tai dang ki: ");
        Scanner sc= new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        ArrayList<PTGT> pt = new ArrayList<>();
        for(int i = 0; i < n; i++){
            System.out.println("Nhap thong tin cho xe tai: ");
            XeTai xt = new XeTai();
            xt.nhap();
            pt.add(xt);
           
        }
        int o;
        System.out.println("Nhap vao so o to dang ki: ");
        
        o = sc.nextInt(); 
        sc.nextLine();
        for(int i = 0; i < o; i++){
            System.out.println("Nhap thong tin cho oto: ");
            Oto ot = new Oto();
            ot.nhap();
            pt.add(ot);
        }
        int m;
        System.out.println("Nhap vao so xe may dang ki: ");
        m = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < m; i++){
            System.out.println("Nhap thong tin cho xe may: ");
            XeMay xm = new XeMay();
            xm.nhap();
            pt.add(xm);
        }
        for(PTGT x : pt){
            x.xuat();
        }
        
        // tim theo mau
        System.out.println("Nhap mau can tim ");
        String mau =sc.nextLine().trim();
        for(int i = 0; i < pt.size(); i++){
            if(mau.equalsIgnoreCase(pt.get(i).mau) ) {
                System.out.println("Thong tin xe co mau can tim la: ");
                pt.get(i).xuat();
            }
        }
    }
}
