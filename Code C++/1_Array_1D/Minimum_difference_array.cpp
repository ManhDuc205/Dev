#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for (int i =0; i <n ; i++){
		cin >> a[i];
	}
	int res = INT_MAX;
	for (int i =0 ; i <n ;i++){
		for(int j = i+1; j <n; j++){
			res = min(res,abs(a[i]-a[j]));
			cout << "Dang xet cap " << a[i] << " " << a[j] << endl;
		}
	}
	cout << res <<endl;
}
