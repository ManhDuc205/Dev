/*
Câu 14: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp người với các thuộc tính: họ tên, năm sinh.
Khai báo lớp giảng viên kế thừa từ lớp người và thêm các thuộc tính: bộ môn công tác, môn đang giảng dạy.
Xây dựng các phương thức: nhập, xuất cho các đối tượng người, giảng viên.
Nhập vào n giảng  viên. Sắp xếp lại và in ra màn hình danh sách giảng viên theo từng bộ môn công tác.

*/

#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Nguoi {
private:
    string ten, namsinh;

public:
    void nhap() {
        cout << "Nhap ten: ";
        getline(cin, ten);
        cout << "Nhap nam sinh: ";
        getline(cin, namsinh);
    }

    void xuat() {
        cout << "Ho ten: " << ten << endl;
        cout << "Nam sinh: " << namsinh << endl;
    }
};

class GiangVien : public Nguoi {
protected:
    string bo_mon, mon_dang_day;

public:
    void nhap() {
        Nguoi::nhap();
        cout << "Nhap bo mon: ";
        getline(cin, bo_mon);
        cout << "Nhap mon dang day: ";
        getline(cin, mon_dang_day);
    }

    void xuat() {
        Nguoi::xuat();
        cout << "Bo mon: " << bo_mon << endl;
        cout << "Mon dang day: " << mon_dang_day << endl;
    }

    string getBomon() {
        return bo_mon;
    }
};

int main() {
    int n;
    cout << "Nhap so luong giang vien: ";
    cin >> n;
    cin.ignore(); 

    vector<GiangVien> dsGiangVien(n); 
    map<string, vector<GiangVien>> danhSachBoMon;

    
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin giang vien thu " << i + 1 << ":" << endl;
        dsGiangVien[i].nhap();
        danhSachBoMon[dsGiangVien[i].getBomon()].push_back(dsGiangVien[i]);
    }

  
    for (auto bm : danhSachBoMon) {
        cout << "\nDanh sach giang vien thuoc bo mon: " << bm.first << endl;
        for (auto gv : bm.second) {
            gv.xuat();
        }
    }

    return 0;
}
