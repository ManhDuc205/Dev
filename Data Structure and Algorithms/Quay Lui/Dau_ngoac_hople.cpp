#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

string s;
string tmp = "[](){}";
int n;
vector<string> res;
bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == '[' || x == '(' || x == '{'){
            st.push(x);
        }
        else{
            if(st.empty()) return false;
            char y = st.top();
            st.pop();
            if((x == ')' && y != '(') || (x == ']' && y != '[') || (x == '}' && y != '{')){
                return false;
            }
        }
    }
    if(st.empty()) return true;
    return false;
}

void Try(int i){
    for(int j = 0; j < tmp.size(); j++){
        s += tmp[j];
        if(s.size() == n){
            if(check(s)){
                res.push_back(s);
            }
            
        }
        else{
            Try(i + 1);
        }
        s.pop_back();
    }
}
int main(){
    cin >> n;
    if( n % 2 != 0){
        cout << "NOT FOUND" << endl;
    }
    else{
        Try(1);
        sort(res.begin(), res.end());
        for(string x : res){
            cout << x << " " ;
        }
        cout << endl;
    }
}