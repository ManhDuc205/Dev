#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b){
	while(b != 0){
		int du = a%b;
		a=b;
		b= du;
	}
	return a;
}
int main(){
	int a,b;
	cin >> a;
	cin >> b;
	if(gcd(a,b)==1) cout << " a va b la hai so nguyen to cung nhau";
	else cout << " a va b ko la hai so nguyen to cung nhau";
}
