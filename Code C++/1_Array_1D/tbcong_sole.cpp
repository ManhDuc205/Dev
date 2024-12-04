#include <bits/stdc++.h>
using namespace std;
bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0) return false;
	}
	return true;
}
double tbcong(int a[], int n){
	int sum =0,dem = 0;
	for (int i=0; i<n ; i++){
		if(nt(a[i])) {
			sum += a[i];
			++dem;
		}
	}
	return (double)sum/dem;
}
int main(){
	int n;
	cin >>n;
	int a[n];
	for( int i =0;i <n ;i++){
		cin >> a[i];
	}
	cout << tbcong(a,n) <<endl;
}
	
