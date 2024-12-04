
package Phanso;

public class phanso {
private
        int tuso, mauso;
public phanso(){}
public phanso(int tuso, int mauso){
        this.tuso = tuso;
        this.mauso = mauso;
    }
public int gcd(int tuso, int mauso){
    int temp = 0;
    while(mauso != 0){
        temp = tuso % mauso;
        tuso = mauso;
        mauso = temp;
    }
    return tuso;
}
public void rutgon() {
    int gcd = gcd(tuso, mauso);
    tuso = tuso / gcd;
    mauso = mauso / gcd;
    }
public phanso cong(phanso a, phanso b){
    phanso kq = new phanso();
    kq.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    kq.mauso  = a.mauso * b.mauso;
    kq.rutgon();
    return kq;
}
public phanso hieu(phanso a, phanso b){
    phanso kqhieu = new phanso();
    kqhieu.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
    kqhieu.mauso  = a.mauso * b.mauso;
    kqhieu.rutgon();
    return kqhieu;
}
public phanso tich(phanso a, phanso b){
    phanso kqtich = new phanso();
    kqtich.tuso = a.tuso * b.tuso;
    kqtich.mauso = a.mauso * b.mauso;
    kqtich.rutgon();
    return kqtich;
}
public phanso thuong(phanso a, phanso b){
    phanso kqthuong = new phanso();
    kqthuong.tuso = a.tuso * b.mauso;
    kqthuong.mauso = a.mauso * b.tuso;
    kqthuong.rutgon();
    return kqthuong;
}

public void xuat(phanso a){
    System.out.println(""+ a.tuso + "/" + a.mauso);
}
}
