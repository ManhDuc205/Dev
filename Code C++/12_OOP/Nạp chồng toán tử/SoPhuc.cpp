#include <iostream>
using namespace std;
class PT{
    private:
        int phanthuc, phanao;
    public:
        PT(){
            phanthuc = 0;
            phanao = 0;
        }
        friend istream & operator >> (istream &is, PT &x){
            is >> x.phanthuc >> x.phanao;
            return is;
        }
        friend ostream & operator << (ostream &os, PT x){
            os << x.phanthuc <<" "<< x.phanao << "i";
            return os;
        }
        PT operator + (PT x){
            PT t;
            t.phanthuc = this->phanthuc + x.phanthuc;
            t.phanao = this->phanao + x.phanao;
            return t;
        } 
        PT operator * (PT x){
            PT z;
            z.phanthuc = (this->phanthuc * x.phanthuc) - (this->phanao * x.phanao);
            z.phanao = (this->phanthuc * x.phanao) + (this->phanao * x.phanthuc);
            return z;
        }
};
int main(){
    PT p[10], t, z;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0 ; i < n; i++){
        t = t + p[i];
        
    }
    cout << t <<endl;
    z = p[0];
    for(int i = 1 ; i < n; i++){
        z = z * p[i];
        
    }
    cout << z  << endl;

}