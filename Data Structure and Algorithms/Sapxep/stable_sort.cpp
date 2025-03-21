#include <bits/stdc++.h>
using namespace std;
// stable_sort = merge sort = stable (ổn định)
/*
    Sắp xếp mảng với nhiều hơn 2 tiêu chí 
    Sắp xếp mảng theo tổng chữ số tăng dần, nếu 2 số có cùng tổng 
    chữ số thì số đứng trước sẽ đứng trước 
*/
int tongcs(int n){
    int res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    return res;
}
bool cmp(int a, int b){
    return tongcs(a) < tongcs(b);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n; i++){
        cin >> a[i];
    }
    stable_sort(a , a + n, cmp);
    for (int x : a) cout << x << " ";
}