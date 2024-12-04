/*
Câu 19: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp PS1 cho các đối tượng là phân số với các thuộc tính: tử số, mẫu số.
Xây dựng phương thức nhập phân số (mẫu số khác 0), in phân số, tối giản phân số.
Xây dựng lớp PS2 kế thừa từ lớp PS1 và bổ sung:
Nạp chồng các toán tử: = (gán), < (nhỏ hơn).
Viết chương trình chính ứng dụng lớp PS2 để nhập một danh sách các đối tượng là
 các phân số (tối đa 10 phần tử). Tìm phân số có giá trị lớn nhất, nhỏ nhất.

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
        PhanSo operator + (PhanSo ps1){
            PhanSo s;
            s.tuso = tuso * ps1.mauso + mauso * ps1.tuso;
            s.mauso = mauso * ps1.mauso;
            return s;
        }

        PhanSo operator - (PhanSo ps1){
            PhanSo m;
            m.tuso = tuso * ps1.mauso - mauso * ps1.tuso;
            m.mauso = mauso * ps1.mauso;
            return m;
        }
        PhanSo operator * (PhanSo ps1){
            PhanSo n;
            n.tuso = tuso * ps1.tuso;
            n.mauso = mauso * ps1.mauso;
            return n;
        }
        PhanSo operator / (PhanSo ps1){
            PhanSo s;
            s.tuso = tuso * ps1.mauso;
            s.mauso = mauso * ps1.tuso;
            return s;
        }
        
};
class PhanSo2 : public PhanSo{
    public:
        PhanSo2() : PhanSo() {}
        PhanSo2(int tuso, int mauso) : PhanSo(tuso, mauso) {}

        PhanSo2 &operator = (const PhanSo2 &ps1){
            if(this != &ps1){
                this->tuso = ps1.tuso;
                this->mauso = ps1.mauso;
            }
            return *this;
        }
         
        int operator < (PhanSo2 ps2){
            if(tuso * ps2.mauso < ps2.tuso * mauso ){
                return 1;
            }
            return 0;
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
    
    PhanSo2 max = ps2[0], min = ps2[0];
    for(int i = 1; i <n; i++){
        if(max < ps2[i]){
            max = ps2[i];
        }
    }
    cout << "\nPhan so co gia tri lon nhat la: " << max <<endl;

    for(int i = 1; i < n; i++){
        if(ps2[i] < min){
            min = ps2[i];
        }
    }
    cout << "Phan so co gia tri nho nhat la: " << min<< endl;
}   
 