#include <bits/stdc++.h>
using namespace std;
int demUoc(int n){
	int countDiv = 0;
	for (int i = 1; i <= sqrt(n); i++){
		if(n%i==0){
			countDiv += 1;
			if(i != n/i){
				countDiv +=1; // tranh truong hop n la so chinh phuong
			}
		}
	}
	return countDiv;
}
int main(){
	int n ; cin >>n;
	cout << demUoc(n) << endl;
}
