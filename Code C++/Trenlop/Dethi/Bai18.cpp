/*
Câu 18: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp PS1 cho các đối tượng là phân số với các thuộc tính: tử số, mẫu số.
Xây dựng phương thức nhập phân số (mẫu số khác 0), in phân số, tối giản phân số.
Xây dựng lớp PS2 kế thừa từ lớp PS1 và bổ sung:
Nạp chồng các toán tử: = (gán), > (lớn hơn).
Viết chương trình chính ứng dụng lớp PS2 để nhập một danh sách các đối tượng là 
phân số (tối đa 10 phần tử). Sắp xếp lại danh sách đã nhập theo trật tự giảm dần.

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

        PhanSo2 operator = (PhanSo2 ps1){ // có lưu ý ở bài 23
            PhanSo2 ps2;
           ps2.mauso = ps1.mauso;
           ps2.tuso = ps1.tuso;
           return ps2;
        }
         
        int operator > (PhanSo2 ps2){
            if(tuso * ps2.mauso > ps2.tuso * mauso ){
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
        cout << ps2[i];
    }
    PhanSo2 temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j <n ;j++){
            if(ps2[i] > ps2[j]){
                temp = ps2[i];
                ps2[i] = ps2[j];
                ps2[j] = temp;
            }
        }
    }
    cout << "\nDay phan so sau khi sap xep: "<< endl;
    for(int i = 0; i <n; i++){
        cout << ps2[i] << " ";
    }
}    