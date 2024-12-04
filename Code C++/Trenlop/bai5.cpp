#include <bits/stdc++.h>
using namespace std;
struct Sinhvien{
    int masv;
    string hoten;
    float diemtoan, diemvan, diemanh, diemtb;

};
int main(){
    Sinhvien a[50];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap masv: ";
        cin >> a[i].masv ;
        cout << "Nhap hoten sv: ";
        cin.ignore();
        getline(cin, a[i].hoten) ;
        cout << " Nhap diem toan, van, anh: ";
        cin >> a[i].diemtoan >> a[i].diemvan >> a[i].diemanh;
        a[i].diemtb = (a[i].diemtoan + a[i].diemvan + a[i].diemanh)/3;
    }
    for(int i = 0; i < n; i++){
        cout << "Ma sv:" << a[i].masv;
        cout << "hoten: " << a[i].hoten;
        cout << "Diemtb: " << a[i].diemtb;

    }
}

