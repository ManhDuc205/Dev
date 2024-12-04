#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, int> mp;
    mp.insert({1,2});
    mp[2] = {3};
    for(pair<int,int> x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(map<int,int>::iterator it = mp.begin(); it != mp.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
}