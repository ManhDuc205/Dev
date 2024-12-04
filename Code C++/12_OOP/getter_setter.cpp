
#include <bits/stdc++.h>
using namespace std;
// 2 phương thức getter và setter
class Sinhvien{
private:
    string masv, hoten, ngaysinh, lop;
    double gpa; 
public:  
    void nhapThongTin();
    void xuatThongTin();
    string getTen();
    void setTen(string newName);
};

void Sinhvien::nhapThongTin(){
    cout << "Nhap masv: "; cin >> this->masv;
    cin.ignore();
    cout << "Nhap ho ten: "; getline(cin, this->hoten);
    cout << "Nhap ngay sinh"; getline(cin, this->ngaysinh);
    cout << "Nhap ten lop: "; getline(cin, this->lop);
    cout << "Nhap GPA: "; cin >> this->gpa;
}

void Sinhvien::xuatThongTin(){
    cout << this->masv << " " << this->hoten << " " << this->ngaysinh << " " << this->lop << " " << fixed << setprecision(2) << this->gpa << endl;
}

string Sinhvien::getTen(){
    return hoten;
}

void Sinhvien::setTen(string newName){
    hoten = newName;
}
int main (){
    Sinhvien x;
    x.nhapThongTin();
    x.xuatThongTin();
    x.setTen("Nguyen Manh Duc");
    cout << x.getTen() << endl;
}