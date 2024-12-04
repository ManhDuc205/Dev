#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Sinhvien{
    private:
        string hoten;
        int namsinh;
        float diem1, diem2, diem3;
    public:
        void nhap();
        void in();
        void kltn();
        void thitt();
        void thilai();
};

void Sinhvien::nhap(){
    cin.ignore();
    getline(cin, hoten);
    cin >> this->namsinh >> this->diem1 >> this->diem2 >> this->diem3;
}
void Sinhvien::in(){
    cout << "Thong tin sinh vien: " <<  this->hoten << " " << this->namsinh ;
}
void Sinhvien::kltn(){
    float sum = (diem1 + diem2 + diem3) / 3;
    if(sum >= 7 && diem1 >= 5 && diem2 >= 5 && diem3 >=5){
        cout << "Sinh vien duoc thi khoa luan tot nghiep"<< hoten << " "<< namsinh << endl;
    }
}
void Sinhvien::thitt(){
    float sum = (diem1 + diem2 + diem3) / 3;
    if(sum < 7 && diem1 >= 5 && diem2 >= 5 && diem3 >= 5){
        cout << "Sinh vien nay duoc thi tot nghiep:\n " << hoten << " "<< namsinh << endl;
    }
}
void Sinhvien::thilai(){
    if(diem1 < 5 || diem2 < 5 || diem3 < 5){
        cout  << "Sinh vien phai thi lai: "<< hoten << " "<< namsinh << endl;
    }
}
int main(){
    cout << "Nhap vao so sinh vien: ";
    int n;
    cin >> n;
    Sinhvien a[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin cho sinh vien " << i + 1 << ":\n";
        a[i].nhap();
    }

    cout << "\nDanh sach sinh vien duoc thi khoa luan tot nghiep: " << endl;
    for (int i = 0; i < n; i++) {
        a[i].kltn();
        a[i].thitt();
        a[i].thilai();
    }


    return 0;
}