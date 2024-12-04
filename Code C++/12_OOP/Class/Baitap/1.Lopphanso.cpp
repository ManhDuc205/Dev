#include <bits/stdc++.h>
using namespace std;
class Phanso{
private:
    float tuso, mauso;
public:
    void nhap(){
        cin >> tuso >> mauso;
    }
    float gcd(float mauso, float tuso){
        int temp = 0;
        while(tuso != 0){
            temp = mauso % tuso;
            mauso = tuso;
            tuso = temp;
        }
        return mauso;
    }
    void in(){
        float ucln = gcd(mauso, tuso);
        tuso = tuso / ucln;
        mauso = mauso /ucln;
        cout << tuso << " / " << mauso << endl;
    }
};
int main(){
    Phanso x;
    x.nhap();
    x.gcd();
    x.in();
}