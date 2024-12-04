#include <bits/stdc++.h>
using namespace std;
int dem[10000001] = {0};
int main(){
    int n; cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n; i++){
        dem[a[i]]++;
    }
    for(int i = 0 ; i < n; i++){
        if(dem[a[i]] != 0){
            cout << "So: " << a[i] << " Xuat hien " << dem[a[i]]<< " lan " << endl;
        }
    }
    return 0;
}