package LAB10_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class TheMuon extends SinhVien{
    private String ngaymuon ,hantra ,sohieusach ;
    private int sophieumuon;
    @Override
    public void nhap(){
        super.nhap();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so phieu muon: ");
        sophieumuon = sc.nextInt();
        System.out.println("Nhap so ngay muon");
        ngaymuon = sc.nextLine();
        System.out.println("Nhap han tra: ");
        hantra = sc.nextLine();
        System.out.println("Nhap so hieu sach: ");
        sohieusach = sc.nextLine();
    }
    @Override
    public void in(){
        super.in();
        System.out.println("So phieu muon : " + sophieumuon);
        System.out.println("So ngay muon: " + ngaymuon);
        System.out.println("Nhap han tra: " + hantra);
        System.out.println("So hieu sach: " + sohieusach);
    }
}
