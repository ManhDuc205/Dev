#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	while( b != 0){
		int du = a % b;
		a = b;
		b = du;
	}
	return a;
}
int lcm(int a , int b){
	return a / gcd(a,b) * b;
}
int main(){
	int a ,b;
	cin >> a;
	cin >>b;
	cout << "UCLN:" << gcd(a,b) << endl;
	cout << "BCNN:" << lcm(a,b) << endl;
}
