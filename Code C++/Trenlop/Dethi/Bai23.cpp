/*
Câu 23: 
Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp PS1 cho các đối tượng là phân số với các thuộc tính: tử số, mẫu số.
Xây dựng phương thức nhập phân số (mẫu số khác 0), in phân số, tối giản phân số.
Xây dựng lớp PS2 kế thừa từ lớp PS1 và bổ sung:
Nạp chồng các toán tử: = (gán), < (nhỏ hơn), + (cộng).
Viết chương trình chính ứng dụng lớp PS2 để nhập một danh sách các đối tượng là 
các phân số (tối đa 10 phần tử). Tìm phân số có giá trị lớn nhất, tính tổng các 
phân số trong danh sách có giá trị nhỏ hơn 1/2.
** NOTE:
PhanSo2 a(1, 2), b(3, 4);
a = b;       // a không được thay đổi, chỉ có đối tượng mới (ps2) được trả về
cout << a;   // Kết quả: 1/2 (không phải 3/4)


*/
#include <iostream>
using namespace std;
class PhanSo{
    protected:
        int tuso, mauso;
    public:
        PhanSo(){
            tuso = 0;
            mauso = 1;
        }
        PhanSo(int tuso, int mauso){
            this->mauso = mauso;
            this->tuso = tuso;
        }
        
        friend istream &operator >> (istream &is, PhanSo &ps1){
            is >> ps1.tuso >> ps1.mauso;
            return is;
        }
        friend ostream &operator << (ostream &os,PhanSo ps1){
            os << ps1.tuso << "/" << ps1.mauso ;
            return os;
        }
        int gcd(int a, int b) {
            while (b != 0) {
                int temp = a % b;
                a = b;
                b = temp;
            }
            return a;
        }
        PhanSo rutgon() {
            int ucln = gcd(tuso, mauso);
            return PhanSo(tuso / ucln, mauso / ucln);
        }

};
class PhanSo2 : public PhanSo{
    public:
        PhanSo2() : PhanSo() {}
        PhanSo2(int tuso, int mauso) : PhanSo(tuso, mauso) {}

        // PhanSo2 operator = (PhanSo2 ps1){
        //     PhanSo2 ps2;
        //    ps2.mauso = ps1.mauso;
        //    ps2.tuso = ps1.tuso;
        //    return ps2;
        // }
        /*code trên sai khi ta thực hiện chuỗi gán vì chỉ có đối tượng sp2(được tạo mới ) trả về
        chứ không phải đối tượng this ==> nên trả về tham chiếu đối tượng hiện tại (*this)
        không nên tạo mới một đối tượng 
    
        */   
        /*Giả sử không kiểm tra this != &ps1, thì trong trường hợp tự gán, 
        đối tượng sẽ ghi đè dữ liệu của chính nó ==> có thể lỗi.*/ 
        PhanSo2& operator=(const PhanSo2& ps1) {
        if (this != &ps1) {  
            this->tuso = ps1.tuso;
            this->mauso = ps1.mauso;
        }
        return *this;
        }
         
        int operator < (const PhanSo2 &ps2){
            if(tuso * ps2.mauso < ps2.tuso * mauso ){
                return 1;
            }
            return 0;
        }
        PhanSo2 operator + (const PhanSo2 &ps2){
            PhanSo2 sum;
            sum.tuso = tuso * ps2.mauso + mauso * ps2.tuso;
            sum.mauso = mauso * ps2.mauso;
            return sum;
        }
};
int main(){
    int n;
    cout << "Nhap vao so luong phan so: ";
    cin >> n;
    PhanSo2 ps2[10];
    for(int i = 0; i< n; i++){
        cin >> ps2[i];
    }
    for(int i = 0; i< n; i++){
        cout << "\nPhan so thu " << i +1 << ": ";
        cout <<ps2[i];
    }
    
    PhanSo2 max = ps2[0];
    for(int i = 1; i <n; i++){
        if(max < ps2[i]){
            max = ps2[i];
        }
    }
    cout << "\nPhan so co gia tri lon nhat la: " << max <<endl;

    PhanSo2 ps12(1,2);
    PhanSo2 sum(0,1);
    for(int i = 0; i < n; i++){
        if(ps2[i] < ps12){
            sum = sum + ps2[i];
        }
    }
    cout <<"Tong cac phan so trong danh sach co gia tri nho hon 1/2 la: " << sum.rutgon(); 
}   
