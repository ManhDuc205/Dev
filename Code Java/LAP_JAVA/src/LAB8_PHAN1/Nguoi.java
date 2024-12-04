/*
Câu 1:
Để quản lý các hộ dân trong một khu phố, người ta quản lý các thông tin
như sau:
- Với mỗi hộ dân, có các thuộc tính:
+ Số thành viên trong hộ ( số người)
+ Số nhà của hộ dân đó. ( Số nhà được gắn cho mỗi hộ dân)
+ Thông tin về mỗi cá nhân trong hộ gia đình.
- Với mỗi cá nhân, người ta quản lý các thông tin như: họ và tên, tuổi,
năm sinh, nghề nghiệp.
1. Hãy xây dựng lớp Nguoi để quản lý thông tin về mỗi cá nhân.
2. Xây dựng lớp KhuPho để quản lý thông tin về các hộ gia đình.
3. Viết các phương thức nhập, hiển thị thông tin cho mỗi cá nhân.
4. Cài đặt chương trình thực hiện các công việc sau:
- Nhập vào một dãy gồm n hộ dân (n - nhập từ bàn phím).
- Hiển thị ra màn hình thông tin về các hộ trong khu phố.
*/
package LAB8_PHAN1;

import java.util.Scanner;

/**
 *
 * @author DucPc
 */
public class Nguoi {
    private String hoten, nghenghiep ;
    public int tuoi, namsinh;
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ho va ten: ");
        hoten = sc.nextLine();
        System.out.println("Nhap tuoi: ");
        tuoi = sc.nextInt();
        System.out.println("Nhap nam sinh: ");
        namsinh = sc.nextInt();
        sc.nextLine();
        System.out.println("Nhap nghe nghiep: ");
        nghenghiep = sc.nextLine();
    }
    
    public void in(){
        System.out.println("Ho va ten: " + hoten);
        System.out.println("Tuoi: " + tuoi);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Nghe nghiep: "+ nghenghiep);
    }
    
}
