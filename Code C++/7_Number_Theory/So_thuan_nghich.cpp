#include <bits/stdc++.h>
using namespace std;
bool thuannghich(int n){
	int lat = 0;
	int temp =  n;
	int du;
	while (n){
		du = n % 10;
		lat = lat * 10 + du;
		n /= 10;
	}
	if ( lat == temp) return true;
	else return false;
}
int main (){
	int n; 
	cin >> n;
	if(thuannghich(n) == true){
		cout << "YES" << endl;
	}
	else cout << "NO" <<endl;
}
