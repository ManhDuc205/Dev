/*
Câu 1:
Thư viện của trường đại học KHTN có nhu cầu cần quản lý việc mượn
sách. Sinh viên đăng ký và tham gia mượn sách thông qua các thẻ mượn
mà thư viện đã thiết kế.
- Với mỗi thẻ mượn, có các thông tin sau: số phiếu mượn , ngày mượn,
hạn trả , số hiệu sách, và các thông tin riêng về mỗi sinh viên đó.
- Các thông tin riêng về mỗi sinh viên đó bao gồm: Họ tên, năm sinh,
tuổi, lớp.
1. Hãy xây dựng lớp SinhVien để quản lý các thông tin riêng về mỗi
sinh viên.
2. Xây dựng lớp TheMuon để quản lý việc mượn sách của mỗi đọc giả.
3. Xây dựng các phương thức để nhập và hiện thị các thông tin riêng cho
mỗi sinh viên
*/
package LAB10_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class SinhVien {
    private String hoten , lop ;
    private int tuoi, namsinh;
    public void nhap(){
        System.out.println("Nhap ho ten sinh vien: ");
        Scanner sc = new Scanner(System.in);
        hoten = sc.nextLine();
        System.out.println("Nhap nam sinh: ");
        namsinh = sc.nextInt();
        System.out.println("Nhap tuoi: ");
        tuoi = sc.nextInt();
        sc.nextLine();
        System.out.println("Nhap ten lop: ");
        lop = sc.nextLine();
    }
    
    public void in(){
        System.out.println("Ho ten sinh vien: "+ hoten);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Tuoi: " + tuoi);
    }
}
