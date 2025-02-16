#include <iostream>
using namespace std;

int n, a[100], final = 0;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i] = 1;
    }
}
bool laXauThuanNghich() {
    for (int i = 1; i <= n / 2; i++) {
        if (a[i] != a[n - i + 1]) return false;
    }
    return true;
}
int main(){
    cin >> n;
    if (n >= 10) {
        return 0;
    }
    ktao();
    while(final == 0){
        if(laXauThuanNghich()){
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
            
        }
        sinh();
    }
    
}