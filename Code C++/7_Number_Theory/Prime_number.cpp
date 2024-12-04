#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
	for ( int i =2 ; i < n ; i++){
		if (n % i == 0){
			return false;
		}		
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	if(prime(n)==true){
		cout << "N la so nguyen to"<<endl;
	}
	else cout << "N ko la so nguyen to" << endl;
}

