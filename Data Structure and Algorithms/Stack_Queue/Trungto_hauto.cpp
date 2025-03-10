// Đổi biếu thức từ trung tố sang hậu tố
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isAlpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int pre(char c){
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

void solve(string s){
    stack<char> st;
    string res = "";
    for(char x : s){
        if(x == '(')st.push(x);
        else if (isAlpha(x)){
            res += x;
        }
        else if(x == ')'){
            while(st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && pre(st.top()) >= pre(x)){
                res += st.top(); 
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}
int main(){
    string s;
    getline(cin, s);
    solve(s);
}