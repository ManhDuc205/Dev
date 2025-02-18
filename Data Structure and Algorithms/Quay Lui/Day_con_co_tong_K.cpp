#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int X[100], a[100], daxet[100];
int n, k, sum = 0;

void in(){
    for(int i = 0; i < n; i++){
        cout << X[i];
    }
}

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if(sum == k){
            cout << "[";
            for(int l = 1; l <= i; l++){
                cout << X[l] << (l <= i - 1 ? " " : "");
            }
            cout << "] ";
        }
        else Try(i + 1, j + 1);
        sum -= a[j];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i<= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        memset(daxet, 0, sizeof(daxet));
        Try(1,1);
        cout << endl;
    }
}