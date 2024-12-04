#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    long long dem[1000000] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n; i++){
        dem[a[i]]++;
    }
    for(int i = 0 ; i < n; i++){
        cout << dem[i] << ' ' << endl;
    }
    return 0;
}