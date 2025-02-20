#include <iostream>
using namespace std;

int n, X[100], cot[100], cheo1[100], cheo2[100], cnt = 0;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0 ){
            X[i] = j;
            cot[j] = 1; cheo1[n + i - j] = 1; cheo2[i + j - 1] = 1;
            if(i == n){
                // for(int i = 1; i <= n; i++){
                //     cout << "Con hau hang " << i << "nam o cot " << X[i] << endl;
                // }
                // cout << endl;
                cnt++;
            }
            else{
                Try(i + 1);
            }
            cot[j] = 0; cheo1[n + i - j] = 0; cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
    cout << cnt << endl;
}