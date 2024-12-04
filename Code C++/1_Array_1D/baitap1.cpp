#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int tmp;
    vector<int> v;
    for(int i =0; i <n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(auto i = v.begin() ; i != v.end(); i++){
    	cout << *i <<" ";
	}
    return 0;
}

