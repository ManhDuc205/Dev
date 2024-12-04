
#include <iostream>
#include <string>
using namespace std;

// Operator_overloading : Nạp chồng toán tử 
// << >>
// cout : ostream
// cin : istream


class Sinhvien{
private:
    string masv, hoten, ngaysinh, lop;
    double gpa; 
public:
    friend istream& operator >> (istream &is, Sinhvien &x){
        is.ignore();
        getline(is, x.hoten);
        getline(is, x.ngaysinh);
        is >> x.lop >> x.gpa;
        return is;
    }
    friend ostream& operator << (ostream &os, Sinhvien x){
        os << x.hoten << " " << x.ngaysinh << " " << x.lop << " " << x.gpa << endl; 
        return os;
    }
    bool operator < (Sinhvien khac){
        return (this->gpa) < (khac.gpa);
    }
};


int main (){
    Sinhvien x, y; 
    cout << "Nhap thong tin sinh vien X:" << endl;
    cin >> x;
    cout << "Nhap thong tin sinh vien Y:" << endl;
    cin >> y;

    if(x < y){
        cout << "Y co GPA cao hon X" << endl;
    }
    else {
        cout << "X co tong GPA cao hon Y" << endl;
    }

    
}