#include <iostream>
using namespace std;
using ll = long long;
ll mod = 1000000007;
ll binpow(ll a, ll b){
    if(b == 0){
        return 1;
    }
    ll tmp = binpow(a, b / 2);
    if(b % 2 == 0){
        return (tmp % mod) * (tmp % mod) % mod;
    }
    else{
        return ((tmp % mod) * (tmp % mod) % mod) * (a % mod) % mod;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << binpow(n, k) << endl;
    }
    
}