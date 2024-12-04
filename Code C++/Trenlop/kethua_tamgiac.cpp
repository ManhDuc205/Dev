#include <iostream>
#include <math.h>
using namespace std;
class Diem{
    private:
        int x, y;
    public:
        Diem(){}
        Diem(int x, int y){
            this->x = x;
            this->y = y;
        }
        void nhap(){
            cin >> this-> x >> this->y;
        }
        void xuat(){
            cout << this->x << " " << this->y << endl;
        }
        float khoangcach(Diem a){
            float kc = sqrt(pow(a.x - this->x, 2) + pow(a.y - this->y, 2));
            return kc;
            
        }
};
class Tamgiac : public Diem{
    private:
        Diem a, b, c;
    public:
        void nhaptg(){
            a.nhap();
            b.nhap();
            c.nhap();
        }
        void xuattg(){
            a.xuat(); cout << "," ; b.xuat(); cout << ","; c.xuat();
        }
       
        void kt_tamgiac(){
            float cb = c.khoangcach(a);
            float ca = c.khoangcach(b);
            float cc = a.khoangcach(b);
            if(cb + ca > cb && cc + ca > cb && cc + cb > ca){
                if(ca * ca + cb * cb == cc * cc || cc * cc + ca * ca == cb *cb || cb * cb + cc * cc == ca * ca){
                    cout << "La tam giac vuong " << endl;
                }
                if(ca == cb && ca == cc && cc == cb){
                    cout << "La tam giac deu" << endl;
                }
                if(ca == cb || cc == cb || cb == ca){
                    cout << "La tam giac can" << endl;
                }

            }
            else cout << " Khong la tam giac";
        }
        float dt_tamgiac(){
            float cb = c.khoangcach(a);
            float ca = c.khoangcach(b);
            float cc = a.khoangcach(b);
            float p = (ca + cb + cc) / 2;
            return  sqrt(p * (p - ca) * (p- cb) * (p - cc));
        }
};
int main(){
    int n; cin >> n;
    Tamgiac a[n];
    for(int i = 0 ; i < n; i++){
        a[i].nhaptg();
    }
    for(int i = 0 ; i < n; i++){
        a[i].kt_tamgiac();
    }
    int max = a[0].dt_tamgiac() ,vt = 0;
    for(int i = 0; i < n; i++){
        if(a[0].dt_tamgiac() > max){
            max = a[0].dt_tamgiac();
            vt = i;
        }
    }
    cout << "  tam giac co dien tich lon nhat: ";
    a[vt].xuattg();
    cout << a[vt].dt_tamgiac();
}