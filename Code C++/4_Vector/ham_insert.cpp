#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a= {1,2,3,4,5,6,7,8,9};
	a.insert(a.end(),10);
	for(auto x : a){
		cout << x << " ";
	}
	cout << endl;
	a.insert(a.rbegin().base(),100);
	for(auto i = a.begin(); i != a.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
	for(auto i = a.end()-1; i != a.begin()-1; i--){
		cout << *i << " ";
	}
}
