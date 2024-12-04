// S(n) = 1 + 2 + 3 + ... + n;
#include <bits/stdc++.h>
using namespace std;
int S(int n){
    if(n == 1){
        return 1;
    }
    else return n + S(n-1);
}
int main(){
    int n; cin >> n;
    cout << S(n) << endl;
}