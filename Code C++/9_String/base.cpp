#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    string s;
    while(t--){
        cin.ignore(1);
        
        getline(cin, s);
        int tuoi; cin >> tuoi;
        cout << s << endl;
        cout << tuoi << endl;       
    }
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << endl;
    }
}
