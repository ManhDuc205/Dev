
#include <bits/stdc++.h>
using namespace std;

// class : lớp 
// attribute: thuộc tính 
// method, behavior: phương thức 
// object: đối tượng 
// contructor: hàm khởi tạo
// destructor: hàm hủy
// biến static trong class

class Sinhvien{
private:
    string masv, hoten, ngaysinh, lop;
    double gpa; 
public:
    Sinhvien(){
        cout << "Construct mac dinh cua lop sinh vien duoc goi";
    }
    Sinhvien(string masv, string hoten, string ngaysinh, string lop, double gpa);
    void nhap();
    void in();
    ~Sinhvien();
};

Sinhvien::~Sinhvien(){

}

Sinhvien::Sinhvien(string masv, string hoten, string ngaysinh, string lop, double gpa){ // biến static
    this->masv = masv;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->lop = lop;
    this->gpa = gpa;
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
    
}