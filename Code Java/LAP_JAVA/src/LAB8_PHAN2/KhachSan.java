package LAB8_PHAN2;

import java.util.ArrayList;
import java.util.Scanner;

public class KhachSan {
    private ArrayList<Nguoi> danhSachKhach;
    private ArrayList<String> loaiphongtro;
    private ArrayList<Integer> songaytro;
    private ArrayList<Integer> giaphong;

    public KhachSan() {
        danhSachKhach = new ArrayList<>();
        loaiphongtro = new ArrayList<>();
        songaytro = new ArrayList<>();
        giaphong = new ArrayList<>();
    }

    public void nhapks() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Nhap so luong khach tro: ");
        int soKhach = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < soKhach; i++) {
            System.out.println("Nhap thong tin cho khach tro thu " + (i + 1) + ":");

            // Nhap thong tin khach
            Nguoi nguoi = new Nguoi();
            nguoi.nhap();
            danhSachKhach.add(nguoi);

            // Nhap thong tin phong
            System.out.print("Nhap loai phong tro: ");
            String phong = sc.nextLine();
            loaiphongtro.add(phong);

            System.out.print("Nhap so ngay tro: ");
            int ngay = sc.nextInt();
            songaytro.add(ngay);

            System.out.print("Nhap gia phong: ");
            int gia = sc.nextInt();
            giaphong.add(gia);

            sc.nextLine(); // Clear buffer
        }
    }

    public void inks() {
        System.out.println("\nThong tin cac khach tro:");
        for (int i = 0; i < danhSachKhach.size(); i++) {
            System.out.println("Khach tro thu " + (i + 1) + ":");
            danhSachKhach.get(i).in();
            System.out.println("Loai phong tro: " + loaiphongtro.get(i));
            System.out.println("So ngay tro: " + songaytro.get(i));
            System.out.println("Gia phong: " + giaphong.get(i));
            
        }
    }
}
