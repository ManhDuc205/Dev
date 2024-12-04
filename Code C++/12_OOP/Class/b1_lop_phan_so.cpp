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
    void in(){
        cout << tu << "/" << mau;
    }
};
int main(){
    Phanso a;
    a.nhap();
    a.rutgon();
    a.in();
}