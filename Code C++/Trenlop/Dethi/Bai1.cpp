/*
Câu 1: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp thí sinh với các thuộc tính: mã thí sinh, họ tên, điểm toán, điểm lý, điểm hóa.
Xây dựng các phương thức: nhập, xuất, tính tổng điểm một đối tượng thí sinh.
Xây dựng constructor không đối, có đối
Nhập vào n thí sinh. In ra màn hình thông tin của thí sinh có tổng điểm cao nhất 
(yêu cầu sử dụng biến con trỏ để cấp phát và giải phóng bộ nhớ).
Sắp xếp danh sách theo họ tên tăng dần (đọc phần getter, 
Tìm kiếm sinh viên theo họ tên
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class ThiSinh{
    private:
        string mats, hoten;
        float diemtoan,diemly, diemhoa;
    public:
    ThiSinh(){}
    ThiSinh(string mats, string hoten, float diemtoan, float diemly, float diemhoa){
        this->mats = mats;
        this->hoten = hoten;
        this->diemtoan = diemtoan;
        this->diemly = diemly;
        this->diemhoa =diemhoa;
    }

    void nhap() {
        cin.ignore();
        cout << "Nhap ma thi sinh: ";
        getline(cin, mats);
        cout << "Nhap ho ten thi sinh: ";
        getline(cin, hoten);
        cout << "Nhap diem Toan: ";
        cin >> diemtoan;
        cout << "Nhap diem Ly: ";
        cin >> diemly;
        cout << "Nhap diem Hoa: ";
        cin >> diemhoa;
    }
    void in(){
        cout << "Ma thi sinh: " << mats << endl;
        cout << "Ho va ten: " << hoten << endl;
        cout << "Diem toan: " << diemtoan << endl;
        cout << "Diem ly: " << diemly << endl;
        cout << "Diem hoa: " << diemhoa << endl;
    }
    float tongdiem(){
        return diemtoan + diemly +diemhoa;
            
    }

    string getHoten(){
        return hoten;
    }
    static bool sosanhhoten(ThiSinh a,  ThiSinh b){
        return a.getHoten() < b.getHoten();
    }
    

};

int main(){
    int n;
    cout << "Nhap so luong thi sinh: " << endl;
    cin >> n;
    // Cấp phát động danh sách thí sinh
    ThiSinh *ds = new ThiSinh[n];
    for(int i = 0; i < n; i++){
        ds[i].nhap();
    }
    float maxdiem = 0;
    int dc = 0;
    for(int i = 0; i < n; i++){
        if(ds[i].tongdiem() > maxdiem ){
            maxdiem = ds[i].tongdiem();
            dc = i;
        }
    }
    cout << "Thong tin thi sinh co tong diem cao nhat:\n";
    ds[dc].in();
    cout << ds[dc].tongdiem() << endl;

    
    sort(ds, ds+n, ThiSinh::sosanhhoten);
    cout << "\nDanh sach thi sinh sau khi sap xep theo ten:\n";
    for (int i = 0; i < n; i++) {
        ds[i].in();
        cout << "Tong diem: " << ds[i].tongdiem() << endl;
    }

    cout << "Nhap ho ten can tim kiem: ";
    cin.ignore();
    string ht;
    getline(cin, ht);
    for(int i = 0; i < n; i++){
        if(ds[i].getHoten() == ht){
            cout << "Thong tin thi sinh can tim: "<< endl;
            ds[i].in();
            cout << "Tong diem: " << ds[i].tongdiem() << endl;

        }
    }
     // Giải phóng bộ nhớ
    delete[] ds;

}