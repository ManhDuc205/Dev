#include <iostream>
#include <string>
using namespace std;
class NhanSu{
    protected:
        string manv, hoten;
        int namsinh;
    public:
        NhanSu(){}
        void nhap(){
            cout << "Nhap ma nhan vien: " ;
            cin.ignore();
            getline(cin,manv);
            cout <<"Nhap ho ten: ";
            getline(cin,hoten);
            cout << "Nhap nam sinh: ";
            cin >> namsinh;
        }
        void in(){
            cout << "Ma nhan vien: " << manv << endl;
            cout <<"Ho va ten: " << hoten << endl;
            cout << "Nam sinh: " << namsinh << endl;
        }
};
class CongNhan: public NhanSu{
    protected:
        int ngaycong;
    public:
        CongNhan(){}
        void nhap(){
            NhanSu::nhap();
            cout << "Nhap vao so ngay cong: " ;
            cin >> ngaycong;
        }
        void in(){
            NhanSu::in();
            cout << "So ngay cong: " << ngaycong << endl;
        }
        long long Tienthuong(){
            if(ngaycong > 26){
                return (ngaycong-26) * 100000;
            }
            else return 0;
        }
};
int main(){
    int n; cout << "Nhap vao so cong nhan: " ;
    cin >> n;
    CongNhan x[50];
    for(int i = 0; i < n ;i++){
        cout << "Nhap thong tin cho cong nhan thu " << i + 1 << ": "<< endl;
        x[i].nhap();
        
    }
    for(int i = 0; i< n; i++){
        x[i].in();
        if(x[i].Tienthuong() > 0){
            cout << "So tien thuong cua cong nhan thu " << i + 1 << ": " << x[i].Tienthuong() << endl;
        }
        else cout << "Cong nhan nay khong co tien thuong!" << endl;
    }
}