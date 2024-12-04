#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    long long a[n];
    map<int,int> mp;
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    for(int i =0; i < n; i++){
        mp[a[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}