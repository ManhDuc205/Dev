#include <bits/stdc++.h>
using namespace std;
int tongUoc(int n){
	int sumDiv = 0;
	for( int i=1; i <= sqrt(n) ; i++){
		if( n%i ==0){
			sumDiv +=i;
			if( i != n/i){
				sumDiv += n/i;
			}
		}
	}
	return sumDiv;
}
int main(){
	int n; cin >> n;
	cout << tongUoc(n)<< endl;
}
