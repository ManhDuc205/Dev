#include <bits/stdc++.h>
using namespace std;
/*viết chương trình khai báo lớp phân số gồm 2 thuộc tính private là tử số 
và mẫu số. Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản 
*/

class Phanso{
private:
    long long tu, mau;
public:
    void nhap(){
        cin >> tu >> mau;
    }
    
    long long gcd(long long tu, long long mau){
        while (mau != 0){
            int du = tu % mau;
            tu = mau;
            mau = du;
        }
        return tu;
    }
    void rutgon(){
        long long ucln = gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;

    }
    Phanso tong(Phanso b) {
        Phanso kqtong;
        kqtong.tu = tu * b.mau + mau * b.tu;
        kqtong.mau = mau * b.mau;
        kqtong.rutgon();
        return kqtong;
    }
    Phanso hieu(Phanso b){
        Phanso kqhieu;
        kqhieu.tu = tu * b.mau - mau * b.tu;
        kqhieu.mau = mau * b.mau;
        kqhieu.rutgon();
        return kqhieu;
    }
    Phanso tich(Phanso b){
        Phanso kqtich;
        kqtich.tu = tu * b.tu;
        kqtich.mau = mau * b.mau;
        kqtich.rutgon();
        return kqtich;
    }
    Phanso thuong(Phanso b){
        Phanso kqthuong;
        kqthuong.tu = tu * b.mau;
        kqthuong.mau = mau * b.tu;
        kqthuong.rutgon();
        return kqthuong;
    }
    void in(){
        cout << tu << "/" << mau << endl;
    }
};
int main(){
    Phanso a, b, ab;
    a.nhap();
    b.nhap();
    ab= a.tong(b);
    ab.rutgon();
    ab.in();
    ab= a.hieu(b);
    ab.rutgon();
    ab.in();
    ab= a.tich(b);
    ab.rutgon();
    ab.in();
    ab= a.thuong(b);
    ab.rutgon();
    ab.in();
    
}