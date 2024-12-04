
package LAB12_PHAN2;

import java.util.Scanner;

public class CanBo {
    private int namsinh;
    private String hoten, gioitinh, diachi;
    public CanBo(){}
    public CanBo(String hoten, int namsinh, String gioitinh, String diachi){
        this.hoten = hoten;
        this.namsinh = namsinh;
        this.gioitinh = gioitinh;
        this.diachi = diachi;     
    }
    public String getHoten(){
        return hoten;
    }
    public String getGioitinh(){
        return gioitinh;
    }
    public String getDiachi(){
        return diachi;
    }
    public int getNamsinh(){
        return namsinh;
    }
    public void setHoten(String hoten){
        this.hoten = hoten;
    }
    public void setNamsinh(int namsinh){
        this.namsinh = namsinh;
    }
    public void setDiachi(String diachi){
        this.diachi = diachi;
    }
    public void nhapThongTin() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap ho ten: ");
        hoten = sc.nextLine();
        System.out.print("Nhap nam sinh: ");
        namsinh = sc.nextInt();
        sc.nextLine();
        System.out.print("Nhap gioi tinh: ");
        gioitinh = sc.nextLine();
        System.out.print("Nhap dia chi: ");
        diachi = sc.nextLine();
    }

    
    public void hienThiThongTin() {
        System.out.println("Ho ten: " + hoten);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Gioi tinh: " + gioitinh);
        System.out.println("Dia chi: " + diachi);
    }
}

