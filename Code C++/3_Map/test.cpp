#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    map<int, int> mp; 
    mp[2] = 3; // 2 3
    mp[3] = 4; 
    mp[3]++; 
    auto it = mp.find(3); 
    --it; 
    cout << (*it).first << ' ' << (*it).second << endl; }