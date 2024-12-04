#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool check(ll n){
	if(n==1 || n == 0) return true;
	ll f1 =0 ; ll f2 = 1;
	for ( int i=2 ; i <= 92 ; i++){
		ll f3 = f1 + f2;
		if (f3 ==n) return true;
		f2=f1;
		f1= f3;
	}
	return false;
}
int main(){
	long long n;
	cin >> n;
	if(check(n) == true) cout << " N la so fibonacci" << endl;
	else cout << " N ko la so fibonacci" << endl;
}
