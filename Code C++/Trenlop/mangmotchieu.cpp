#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Mang{
    private:
        int pt;
        int n[50];
    public:
        void nhap();
        void in();
        int tongchan();
        int gtMax();
        void sapxep();

};
void Mang::nhap(){
    cout << "Nhap so phan tu: ";
    cin >> pt;
    for(int i = 0; i < pt; i++){
        cin >> n[i];
    }
}
void Mang::in(){
    for(int i = 0; i < pt; i++){
        cout << n[i] << " ";
    }
    cout << endl;
}
int Mang::tongchan(){
    int sum = 0;
    for(int i = 0; i < pt; i++){
        if(n[i] % 2 == 0 ){
            sum += n[i];
        }
    }
    return sum;
}
int Mang::gtMax(){
    int max1 = 0;
    for(int i = 0; i < pt - 1; i++){
        max1 = max(n[i], n[i + 1]);
    }
    return max1;
}
void Mang::sapxep(){
    for(int i = 0; i < pt - 1; i++){
        for(int j = i + 1; j < pt; j++){
            if(n[i] >= n[j]){
                swap(n[i], n[j]);
            }
        }
    }
    in();
}
int main(){
    Mang a;
    a.nhap();
    a.in();
    cout <<a.tongchan() << endl;
    cout << a.gtMax() << endl;
    a.sapxep();
}