
#include <bits/stdc++.h>
#include <string>
using namespace std;

// class : lớp 
// attribute: thuộc tính 
// method, behavior: phương thức 
// object: đối tượng 
// contructor: hàm khởi tạo
// destructor: hàm hủy


class Sinhvien{
private:
    string masv, hoten, ngaysinh, lop;
    double gpa; 
public:
    Sinhvien(){}
    Sinhvien(string masv, string hoten, string ngaysinh, string lop, double gpa);
    void nhap();
    void in();
    ~Sinhvien();

    void Chuanhoaten(){
        stringstream ss(hoten); // biến xâu string của bạn thành luồng
        string res = "", w;
        while (ss >> w){
            res += toupper(w[0]);
            for(int i = 1; i < w.size(); i++){
                res += tolower(w[i]);
            }
            res += " ";
        }
        res.pop_back();
        hoten = res;
    }
    void Chuanhoangaysinh(){
        if(ngaysinh[1] == '/') ngaysinh += "0" + ngaysinh;
        if(ngaysinh[4] == '/') ngaysinh.insert(3,"0");
    }
};

Sinhvien::~Sinhvien(){
    // hàm tạo được hủy tại đây
}

Sinhvien::Sinhvien(string masv, string hoten, string ngaysinh, string lop, double gpa){
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
    cout << "Nhap ngay sinh: "; getline(cin, this->ngaysinh);
    cout << "Nhap ten lop: "; getline(cin, this->lop);
    cout << "Nhap GPA: "; cin >> this->gpa;
}

void Sinhvien::in(){
    cout << this->masv << " " << this->hoten << " " << this->ngaysinh << " " << this->lop << " " << fixed << setprecision(2) << this->gpa << endl;
}
void abc(){
    Sinhvien a;
}
int main (){
    int n; cin >> n;
    Sinhvien a[100];
    for(int i = 0; i < n; i++){
        a[i].nhap();
        a[i].Chuanhoaten();
        a[i].Chuanhoangaysinh();
    }
    
    for(int i = 0; i < n; i++){
        a[i].in();
    }
}