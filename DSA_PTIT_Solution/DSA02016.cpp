#include <iostream>
#include <vector>
using namespace std;
vector<int> cheo1, cheo2, cot, X;
int n, cnt = 0;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0 ){
            X[i] = j;
            cot[j] = 1; cheo1[n + i - j] = 1 ; cheo2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else{
                Try(i + 1);
            }
            cot[j] = 0; cheo1[n + i - j] = 0 ; cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        cot.assign(n + 1, 0);
        cheo1.assign(2 * n + 1, 0);
        cheo2.assign(2 * n + 1, 0);
        X.assign(n + 1, 0);
        Try(1);
        cout << cnt << endl;
    }
}