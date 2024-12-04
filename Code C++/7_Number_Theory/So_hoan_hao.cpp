#include <bits/stdc++.h>
using namespace std;
bool sohoanhao(long long n){
	long long sum = 1;
	for ( int i =2; i <= sqrt(n) ; i++){
		if(n%i==0){
			sum +=i;
			if(i != n/i){
				sum += n/i;
			}
		}
	}
	return sum == n;
}
int main(){
	int n ; cin >>n;
	if(sohoanhao(n)== true){
		cout << "N la so hoan hao" <<endl;
	}
	else cout << " N ko la so hoan hao" << endl;
}
