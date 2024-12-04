#include <iostream>
#include <string>
using namespace std;

class Nguoi {
private:
    string hoten, namsinh;

public:
    void setHoten(string hoten) {
        this->hoten = hoten;
    }
    void setNamsinh(string namsinh) {
        this->namsinh = namsinh;
    }
    string getHoten() {
        return hoten;
    }
    string getNamsinh() {
        return namsinh;
    }
};

class Sinhvien : public Nguoi {
private:
    string masv;
    float dtb;

public:
    void nhap() {
        cin.ignore();
        string ht,ns;
        cout << "Nhap ho ten: ";
        getline(cin, ht);
        setHoten(ht);
        cout << "Nhap nam sinh: ";
        getline(cin, ns);
        setNamsinh(ns);
        cout << "Nhap ma sinh vien: ";
        getline(cin, masv);
        cout << "Nhap diem trung binh: ";
        cin >> dtb;
    }

    void in() {
        cout << "Ho ten: " << getHoten() << endl;
        cout << "Nam Sinh: " << getNamsinh() << endl;
        cout << "Ma SV: " << masv << endl;
        cout << "Diem TB: " << dtb << endl;
    }

    float getDtb() {
        return dtb;
    }

    string getMasv() {
        return masv;
    }
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    Sinhvien a[50];
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        a[i].nhap();
    }

    cout << "\nDanh sach sinh vien vua nhap:\n";
    for (int i = 0; i < n; i++) {
        a[i].in();
    }

    

// Sắp xếp danh sách sinh viên theo điểm trung bình giảm dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].getDtb() < a[j].getDtb()) {
                Sinhvien temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
   
    cout << "\nDanh sach sinh vien sau khi sap xep theo diem trung binh giam dan:\n";
    for (int i = 0; i < n; i++) {
        a[i].in();
    }
    string t;
    cout << "\nNhap vao ma sinh vien can tim: ";
    cin.ignore(); // Xóa bộ đệm trước khi nhập chuỗi
    getline(cin, t);
    bool ktra = false;
    for (int i = 0; i < n; i++) {
        if (a[i].getMasv() == t) {
            cout << "\nThong tin sinh vien can tim:\n";
            a[i].in();
            ktra = true;
            break;
        }
    }
    if (!ktra) {
        cout << "Khong tim thay sinh vien co ma: " << t << endl;
    }

    

    return 0;
}
