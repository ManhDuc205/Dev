#include <iostream>
#include <math.h>
using namespace std;
class Toado{
private:
    int x, y;
public:
    void nhapdiem(){
        cin >> x >> y;
    }
    void in(){
        cout << "Toa do x: " << x << "Toa do y: " << y << endl;
    }
    float khoangcach(Toado a){
        float kc = sqrt(pow(x - a.x,2)+ pow(y - a.y,2));
        return kc;
    }

};
int main(){
    Toado a, b, c;
    a.nhapdiem();
    b.nhapdiem();
    c.nhapdiem();
    a.in();
    b.in();
    c.in();
    float dAB = a.khoangcach(b);
    float dBC = b.khoangcach(c);
    float dCA = c.khoangcach(b);

    if (dAB + dBC > dCA && dAB + dCA > dBC && dBC + dCA > dAB) {
        if (dAB == dBC && dBC == dCA) {
            cout << "Tam giac deu" << endl;
        } else if (dAB == dBC || dBC == dCA || dCA == dAB) {
            cout << "Tam giac can" << endl;
        }
        else {
            cout << "Tam giac thuong" << endl;
        }
    } else {
        cout << "Khong tao thanh tam giac" << endl;
    }

    return 0;
}