#include <iostream>
using namespace std;
using ll = long long;

ll Fibo[100];
void ktao(){
    Fibo[1] = 1; Fibo[2] = 1;
    for(int i = 3; i <= 92; i++){
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
}

char fibo(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= Fibo[n - 2]){
        return fibo(n - 2, k);
    }
    else{
        return fibo(n - 1, k - Fibo[n - 2]);
    }
}

int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << fibo(n,k) << endl;
    }
    
}