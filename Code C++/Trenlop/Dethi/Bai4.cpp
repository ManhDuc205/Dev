/*
Câu 4: 
Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp time với các thuộc tính: giờ, phút, giây.
Xây dựng hàm tạo không đối, hàm tạo có đối, hàm hủy một đối tượng time.
Xây dựng các phương thức: nhập, xuất, chuẩn hóa một đối tượng time.
Định nghĩa toán từ ++,-- để tăng, giảm một giây. Thực hiện tăng, giảm một giây
và in kết quả ra màn hình (kết quả phải được chuẩn hóa dưới định dạng 24 tiếng hh:mm:ss).

*/

#include <iostream>
using namespace std;
class Time{
    private:
        int m , h ,s;
    public:
    Time(){}
    Time(int s, int m, int h){
        this->s = s;
        this->h = h;
        this->m = m;
    }
    ~Time(){}

    void nhap(){
        cout << "Nhap vao gio:";
        cin >> h ;
        cout << "Nhap vao phut:";
        cin >> m;
        cout << "Nhap vao giay:";
        cin >> s;
        normalize();
    }
    void in(){
        if(h >= 0 && h <= 9){
            cout << "0"<< h;
        }
        else cout << ":"<<h;
        if(m >= 0 && m <= 9){
            cout << ":0"<< m;
        }
        else cout << ":"<< m;
        if(s >= 0 && s <= 9){
            cout << ":0"<< s;
        }
        else cout << ":" << s;
        
    }
    void normalize(){
        while (s < 0) {
            m -= 1;
            s += 60;
        }
        if (m < 0) {
            h -= 1;
            m += 60;
        }
        
        if(s >= 60){
            m += s /60;
            
            s = m % 60;
        }
        if(m >= 60){
            h += m / 60;
            m = m % 60;
        }
        if(h > 24){
            h = h % 24;
        }
        if(h == 24) {
            h = 0;
        }
        if(h < 24){
            h += 24;
        }
        h = h % 24;
            
    }
    Time operator ++(){
        s++;
        normalize();
        return *this;
    }
    Time operator --(){
        s--;
        normalize();
        return *this;
    }
};
int main(){
    Time t;
    t.nhap();
    cout << "Thoi gian hien tai:";
    t.in();
    cout << "\nTang mot giay: " ;
    ++t;
    t.in();
    --t;
    cout <<"\nGiam mot giay: " ;
    --t;
    t.in();
    
}