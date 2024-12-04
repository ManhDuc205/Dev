#include <bits/stdc++.h>
using namespace std;
class Triangle{
    private:
        int a, b, c;
    public:
        Triangle(){}
        Triangle(int a, int b, int c){
        }
        void nhap();
        void in();
        void ktra();
        int chuvi();
        float area();
};
void Triangle::nhap(){
    cin >> a >> b >> c;
}
void Triangle::in(){
    cout << a << b << c;
}
void Triangle::ktra(){
    if(a + b > c && a + c > b && b + c > a){
        cout << "La tam giac" << endl;
    }
}
int Triangle::chuvi(){
    int cv = a + b + c;
    cout << " Chu vi tam giac la: " ;
    return cv;
}
float Triangle::area(){
    float p = chuvi() / 2;
    float s = sqrt(p*(p- a)*(p- b) * (p - c));
    return s;
}
int main(){

}