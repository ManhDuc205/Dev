#include <bits/stdc++.h>
using namespace std;
int Tohop(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    // Công thức đệ quy: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return Tohop(n-1 , k-1) + Tohop(n-1 , k);
}
int main(){
    int n;cout << "Nhap n: " ; cin >> n;
    int k;cout << "Nhap k: " ; cin >> k;
    cout << Tohop(n,k) << endl;  
}