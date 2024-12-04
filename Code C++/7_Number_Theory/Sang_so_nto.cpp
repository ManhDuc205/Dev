#include <bits/stdc++.h>
using namespace std;
const int n = 1000000;
bool nt[n+1];
void sang(){
	for (int i=0;i <= n ; i++){
		nt[i]=true;
	}
	nt[0] = nt[1] = false;
	for ( int i =2; i<= sqrt(n);i++){
		if(nt[i]==true){
			for(int j = i*i ; j <= n; j+= i){ // bat dau tu j=4 sau do la j += i = 6 <=> 2i,4i,6i,8i...
				nt[j]= false;
			}
		}
	}
}
int main(){
	int a; cin >> a;
	sang();
	for(int i = 0; i <= a ; i++){
		if( nt[i]==true) cout << i << " ";
	}
}
