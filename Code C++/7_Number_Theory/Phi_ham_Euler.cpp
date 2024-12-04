#include <bits/stdc++.h>
using namespace std;
int euler(int n){
	int res=n;
	for(int i = 2; i<= sqrt(n) ; i++){
		if(n % i == 0){
			res = res - res/i;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n>1) res= res - res/n;
	return res;
}
int main(){
	int n;
	cin >> n;
	cout << euler(n) << endl;
}
