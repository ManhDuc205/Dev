package LAB8_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class main {
    public static void main(String[] args) {
        int n;
        System.out.println("Nhap vao so ho dan");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        
        KhuPho[] ds = new KhuPho[n];
        for(int i = 0; i < n; i++){
            System.out.println("Nhap thong tin cho ho dan thu " + (i+1));
            ds[i] = new KhuPho();
            ds[i].nhapthongtinhodan();
          
                    
        }
        System.out.println("\n Thong tin cac ho dan trong pho:");
        for(int i = 0; i < n; i++){
            ds[i].inhodan();
        }
    }
}
