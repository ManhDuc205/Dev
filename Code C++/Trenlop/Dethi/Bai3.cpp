/*
Câu 3: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp date với các thuộc tính: ngày, tháng, năm.
Xây dựng hàm tạo không đối, hàm tạo có đối, hàm hủy một đối tượng date.
Xây dựng các phương thức: nhập, xuất, chuẩn hóa một đối tượng date.
Định nghĩa toán từ ++,-- để tăng, giảm một ngày. Thực hiện tăng, giảm một 
ngày và in kết quả ra màn hình (kết quả phải được chuẩn hóa dưới dạng dd-mm-yyyy).

*/

#include <iostream>
using namespace std;
class Date{
    private:
        int day, month, year;
    public:
        Date(){};
        Date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        ~Date(){}
         bool namNhuan(int year){
            return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        }

        int chuanhoathang(int month, int year){
            switch(month){
                case 4 : case 6: case 9: case 11 :
                return 30;
                case 2 : 
                if(namNhuan(year) == true){
                    return 29;
                }
                else return 28;
                default: return 31;
            }
        }
        void nhap(){
            cout << " Nhap ngay: ";
            cin >> day;
            cout << "\n Nhap thang: ";
            cin >> month;
            cout << "\n Nhap nam: ";
            cin >> year;
            chuanhoa();
        }

        void in(){
            if(day <10 && day > 0){
                cout << "Ngay :" <<"0" << day;
            }
            else cout << "Ngay :" << day;
            if(month <10 && month > 0){
                cout << "Thang :" <<"0" << month;
            }
            else cout << "Thang: " << month; 
            cout << " Nam: " << year << endl;
            chuanhoa();
        }
       
        void chuanhoa() {
            if (month < 1) {
                month  =1;
                year--;
            } 
            while (month > 12) {
                month = month - 12;
                year++;
            }

            int maxDay = chuanhoathang(month, year);
            while (day > maxDay) {
                day -= maxDay;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
                maxDay = chuanhoathang(month, year);
            }

            while (day < 1) {
                month--;
                if (month < 1) {
                    month = 12;
                    year--;
                }
                day += chuanhoathang(month, year);
            }   
        }
        /*
        tiền tố là trả về đối tượng đã được thay đổi nên nó phải được tham chiếu 
        nhằm thay đổi cái giá trị của đối tượng cũ 
        còn hậu tố là trả về đối tượng cũ sau đó mới thay đổi giá trị cũ tôi 


        */

        // Date &operator ++ (int){
        //     Date temp =*this; // lưu trạng thái hiện tại
        //     ++day;
        //     return temp; // trả về trạng thái cũ 

        // }
        Date operator ++(){
            ++day;
            chuanhoa();
            return *this;
        }
        Date operator --(){
            --day;
            chuanhoa();
            return *this;
        }
};
int main(){
    Date a;
    a.nhap();
    a.in();
    // cout << "Tang mot ngay (hau to)" << endl;
    // a++;
    // a.in();
    cout << "Tang mot ngay: " << endl;
    ++a;
    a.in();
    --a;
    cout <<"Giam mot ngay: " << endl;
    --a;
    a.in();

    
}
