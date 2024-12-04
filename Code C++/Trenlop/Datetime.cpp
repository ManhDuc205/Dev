#include <iostream>
using namespace std;
class Time{
    private:
        int h, m, s;
    public:
        void nhap(){
            cin >> h >> m >> s;
        }
        void in(){
            cout << h << ":" << m  << ":"<< s << endl;
        }
        void normalize(){
            if(h < 0){
                nhap();
            }
            if(m < 0){
                nhap();
            }
            if(s < 0){
                nhap();
            }
            
            if(s > 60){
                m += s /60;
                h = m /60;
                s = m % 60;
            }
            if(m > 60){
                h += m / 60;
                m = m % 60;
            }
            if(h > 24){
                h = h % 24;
            }
            in();
        }

};
int main(){
    Time x;
    x.nhap();
    x.in();
    x.normalize();
}
