#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q; cin >> q;
    map<string,int> mp;   
    for(int i =0; i < q; i++){
        int type,y; string x;
        cin >> type ;
        if(type == 1){
            cin >> x >> y;
            mp[x] += y; // Giải quyết khi nhập 2 lần có thể trả về tổng của value cho 1 key           
        }
        if(type == 2){
            cin >> x;
            mp.erase(x);
        }
        if(type == 3){
            cin >> x;
            map<string, int>::iterator it = mp.find(x);
            if(it != mp.end()){
                cout << (*it).second << endl;
            }
            else cout << "0" << endl;
        }
    }
    
    return 0;
}



