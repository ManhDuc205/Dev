/*
    Cho hai mảng, in ra màn hình hợp và giao của 2 mảng và đã được sắp xếp 
    input :                                 Output:
        4 5                                 1 2 3 4 5 6 7
        1 2 4 3                             2 3
        2 3 7 5 6
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int> giao, hop;
    int i =0 , j=0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            ++i ; ++j;
        }
        else if ( a[i] < b[j]){
            hop.push_back(a[i]); ++i;
        }
        else {
            hop.push_back(b[j]); ++j;
        }
    }
    while(i < n){
        hop.push_back(a[i++]);
    }
    while (j < m){
        hop.push_back(b[j++]); 
    }
    for( int x : hop){
        cout << x << " ";
    }
    cout << endl;
    for(int x: giao){
        cout << x << " ";
    }
    cout << endl;
    return 0;    
}      