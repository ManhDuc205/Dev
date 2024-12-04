#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {1,2,3,4,5,6,7,8,9,10};
	a.insert(a.rbegin().base(),11);
	for(auto i = a.begin() ; i != a.end();++i){
		cout << *i << " ";
	}
	cout << endl;
	for(vector<int>::reverse_iterator i = a.rbegin(); i != a.rend(); i++){
		cout << *i << " ";
	}
	
}
