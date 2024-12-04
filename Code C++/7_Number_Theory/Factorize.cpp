#include <bits/stdc++.h>
using namespace std;
void factorize(long long N){
	int lastFactor = 0;
    for (int d = 2; N > 1; d++) {
        if (N % d == 0) {
            if (d != lastFactor) {
                if (lastFactor != 0) cout << " ";
                cout << d;
                lastFactor = d;
            }
            while (N % d == 0) {
                N /= d;
            }
        }
    }
    cout << endl;
}
int main (){
	long long N;
	cin >> N;
	factorize(N);
}
