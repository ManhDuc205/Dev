#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tohop(int n, int k){
	ll res = 1;
	for (int i =1; i <= k ; i++){
		res *= (n-k +i);
		res /= i;
	}
	return res;
}
int main(){
	int n; cin >> n;
	int k; cin >> k;
	cout << tohop(k,n)<<endl;
}
