#include <bits/stdc++.h>
using namespace std; 
bool fabonacci( long long n){
	long long fibo[100];
	fibo[0]=0;
	fibo[1]=1;
	for ( int i =2; i <= 92; i++){
		fibo[i] = fibo [i-1] + fibo [i-2];
	}
	for (int i = 0; i <= 92; i++){
		if(fibo[i]==n){
			return true;
		}
	}
	return false;
}
int main(){
	long long n;
	cin >> n;
	if(fabonacci(n)==true){
		cout << " N la so fabonacci" << endl;
	}
	else cout << "N ko la so fabonacci" << endl;
}

