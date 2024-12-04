
package thuvien;


public class QuanlySach {
    public static void main(String[] args) {
        Sach sach = new Sach();
        TapChi tapchi = new TapChi();
        Bao bao = new Bao();
        System.out.println("Nhap thong tin sach:");
        sach.nhapThongTin();
        System.out.println("\nNhap thong tin tap chi:");
        tapchi.nhapThongTin();
        System.out.println("\nNhap thong tin bao:");
        bao.nhapThongTin();

        System.out.println("\nThong tin sach:");
        sach.inThongTin();
        System.out.println("\nThong tin tap chi:");
        tapchi.inThongTin();
        System.out.println("\nThong tin bao:");
        bao.inThongTin();
        
    }
}
