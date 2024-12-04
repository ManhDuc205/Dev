#include <bits/stdc++.h>
using namespace std;
int Fibo(int n){
    if(n == 0|| n == 1){
        return 1;
    }
    // Công thức đệ quy: F(n) = F(n-1) + F(n-2)
    return Fibo(n-1) + Fibo(n-2);
}
int main(){
    int n; cin >> n;
    cout << Fibo(n) << endl;
}