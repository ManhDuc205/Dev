#include <bits/stdc++.h>
using namespace std;
bool squarenumber(long long n){
	int m = sqrt(n);
	if(1ll * m * m ==n){
		return true;
	}
	else return false;
}
int main(){
	long long n; cin >> n;
	if(squarenumber(n)==true){
		cout << " N la so chinh phuong" << endl;
	}
	else cout << " N ko la so chinh phuong" << endl;
}
