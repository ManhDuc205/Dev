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
        
        friend istream &operator >> (istream &is, PhanSo &sp1){
            is >> sp1.tuso >> sp1.mauso;
            return is;
        }
        friend ostream &operator << (ostream &os,PhanSo sp1){
            os << sp1.tuso << "/" << sp1.mauso;
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
        PhanSo operator + (PhanSo sp1){
            PhanSo s;
            s.tuso = tuso * sp1.mauso + mauso * sp1.tuso;
            s.mauso = mauso * sp1.mauso;
            return s;
        }

        PhanSo operator - (PhanSo sp1){
            PhanSo m;
            m.tuso = tuso * sp1.mauso - mauso * sp1.tuso;
            m.mauso = mauso * sp1.mauso;
            return m;
        }
        PhanSo operator * (PhanSo sp1){
            PhanSo n;
            n.tuso = tuso * sp1.tuso;
            n.mauso = mauso * sp1.mauso;
            return n;
        }
        PhanSo operator / (PhanSo sp1){
            PhanSo s;
            s.tuso = tuso * sp1.mauso;
            s.mauso = mauso * sp1.tuso;
            return s;
        }
        
};
class PhanSo2 : public PhanSo{
    public:
        PhanSo2() : PhanSo() {}
        PhanSo2(int tuso, int mauso) : PhanSo(tuso, mauso) {}

        PhanSo2 operator = (PhanSo2 sp1){
            PhanSo2 sp2;
           sp2.mauso = sp1.mauso;
           sp2.tuso = sp1.tuso;
           return sp2;
        }
        
};
int main(){
    int n;
    cout << "Nhap vao so luong phan so: ";
    cin >> n;
    PhanSo2 sp2[10];
    for(int i = 0; i< n; i++){
        cin >> sp2[i];
    }
    for(int i = 0; i< n; i++){
        cout <<sp2[i];
    }
    PhanSo sum;   
    for(int i = 0; i < n;i++){
     sum = sum + sp2[i];
    }
    cout << "Tong cac phan so: " << sum.rutgon() << endl;
}