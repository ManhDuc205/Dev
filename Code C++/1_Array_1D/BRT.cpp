/*
    Đề bài BRT.png
    Dùng 2 vòng for =>> TLE
*/
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin() , a.end());
    int space = 2e9 + 5;
    int dem = 0;
    for(int i =0; i < n-1; i++ ){
        if(space > abs(a[i]-a[i+1])){
            space = abs(a[i]-a[i+1]);
            dem = 1;
        }
        else if(space == abs(a[i]-a[i+1])){
            dem++;
        }
    }
    cout << space << " " << dem ;
}