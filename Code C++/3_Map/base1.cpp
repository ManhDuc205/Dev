#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, int> mp;
    mp.insert({1,2});
    mp.insert({2,4});
    mp.insert({2,3});
    mp.insert({4,3});
    mp.insert({2,6});
    mp.erase(2);
    for(auto x: mp){
        cout << x.first <<  " "  << x.second <<  endl;
    }
    cout << endl;
    auto it = mp.find(4);
    cout << (*it).first << " " << (*it).second << endl;
}