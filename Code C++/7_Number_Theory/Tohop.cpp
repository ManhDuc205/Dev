#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gt(int n){
	ll res =1;
	for (int i = 2;i<=n;i++){
		res *=i;
	}
	return res;
}
ll tohop(int n, int k){
	ll ngt = gt(n);
	ll kgt = gt(k);
	ll nkgt = gt(n-k);
	return ngt / (kgt * nkgt);
}
int main(){
	int n; cin >> n;
	int k; cin >> k;
	cout << tohop(k,n)<<endl;
}
