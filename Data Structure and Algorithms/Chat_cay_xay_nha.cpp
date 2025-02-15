/*https://laptrinhonline.club/problem/cotyey05012022*/
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int a[], int n, int L, int temp){
    int dem = 0;
    for(int i = 0; i < n; i++){
        dem += a[i] - temp;
    }
    return dem >= L;
}

int main(){
    int n, L;
    cin >> n >> L;
    int* a = new int[n];
    for (int &x : a){
        cin >> x;
    }
    int left = 0, right = *max_element(a, a + n);
    int ans = -1;
    while (left <= right){
        int m = (left + right) / 2;
        if(check(a, n, L , m)){
            ans = m;
            left = m + 1;
        }
        else {
            right = m - 1;
        }
    }
    cout << ans << endl;
    delete[] a;
}