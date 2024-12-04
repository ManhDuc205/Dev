#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

/*
isdigit(char c): kiểm tra chữ số
islower(char c): kiểm tra in thường 
isupper(char c): kiểm tra in hoa
isalpha(char c): kiểm tra chữ cái
int tolower(char c): trả về kí tự in thường của c
int toupper(char c): trả về kí tự in hoa của c
*/

void to_upper(string &s){
    for(int i = 0;i < s.size(); i++){
        toupper(s[i]); // trả về kí tự chứ ko phải thay đổi xâu 
    }
}
int main(){
    string s;
    getline(cin, s);
    for(char x : s){
        cout << (char)tolower(x);
    }
    cout << endl;
    to_upper(s);
    cout << s << endl;
}