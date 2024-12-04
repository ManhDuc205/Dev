
#include <bits/stdc++.h>
using namespace std;

// friend function : hàm bạn


class Sinhvien{
private:
    string masv, hoten, ngaysinh, lop;
    double gpa; 
public:
    Sinhvien(){}   
    void nhap();
    void in();   
    friend void inthongtin(Sinhvien a);
};

void inthongtin(Sinhvien a){
    cout << a.masv << " " << a.hoten << endl;
}

void Sinhvien::nhap(){
    cout << "Nhap masv: "; cin >> this->masv;
    cin.ignore();
    cout << "Nhap ho ten: "; getline(cin, this->hoten);
    cout << "Nhap ngay sinh"; getline(cin, this->ngaysinh);
    cout << "Nhap ten lop: "; getline(cin, this->lop);
    cout << "Nhap GPA: "; cin >> this->gpa;
}

void Sinhvien::in(){
    cout << this->masv << " " << this->hoten << " " << this->ngaysinh << " " << this->lop << " " << fixed << setprecision(2) << this->gpa << endl;
}

int main (){
    Sinhvien a; 
    a.nhap();
    a.in();
    inthongtin(a);
    
}