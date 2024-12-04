#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

/*
stoi: string to interger
Stoll: string to long long
to_string (int n)
*/

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    for(char x : s){
        sum += x - '0';
    }
    cout << sum <<endl;

}