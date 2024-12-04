#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// intro sort = quick sort + heap sort = non- stable

/*
    [x, y] => sort(a+x, a+y+1)
    [y ,x] => sort(a+x, a+y+1, greater<type>())
*/

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end()); // sap xep tang dan 
    for(auto x : a){
        cout << x << " ";
    }
    cout << endl;
    sort(a.begin(), a.end(), greater<int>());
    for(auto x : a){
        cout << x << " ";
    }
}