#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
	vector<int>::iterator it1 = a.begin();
	cout << *it1 << endl;
	auto it2 = a.rbegin();
	cout << *it2 <<endl;
	a.push_back(10);
	a.insert(a.begin()+2,10);
	a.erase(a.begin()+5,a.begin()+9+1);
	a.pop_back();
	//a.assign(6,1000);
	//a.resize(3);
	for(auto i=a.begin(); i != a.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	for(auto x:a){
		cout <<x <<" ";
	}
}
