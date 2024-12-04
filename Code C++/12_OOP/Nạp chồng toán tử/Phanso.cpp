#include <iostream>
using namespace std;
class PS{
    private:
        int x, y;
    public:
        friend istream & operator >> (istream &is, PS &a){
            is >> x >> y;
            return is;
        }  
        friend ostream & operator << (ostream &os, PS a){
            os << x << "/" << y;
            return os;
        }
        PS operator + (PS a){
            PS sum;
            sum.x = this->x * a.y + this->y * a.x;
            sum.y = this->y * a.x;
            return sum; 
        }

};
int main(){
    PS a, b;
    cout << a + b << endl;
}