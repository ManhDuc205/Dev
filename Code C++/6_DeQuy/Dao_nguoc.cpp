#include <bits/stdc++.h>
using namespace std;
string daonguoc(const string &s){
    if(s.length() == 0){
        return s;
    }
    else{
        return daonguoc(s.substr(1)) + s[0]; // hàm substr là để trích xuất chuỗi từ vị trí này đến vị trí kia 
    }
}
int main(){
    string s;
    cin >> s;
    cout << daonguoc(s) << endl;
}