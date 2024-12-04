#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {1,2,3,4,5,6,7,8,9,10};
	a.erase(a.begin()+1, a.begin()+10);
	for(auto i = a.begin() ; i != a.end();++i){
		cout << *i << " ";
	}
	cout << endl;
	
}
