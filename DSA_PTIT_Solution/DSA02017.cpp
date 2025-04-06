#include <iostream>
#include <vector>
using namespace std;

vector<int> X, cheo1, cheo2, cot;
int n, maxdiem = 0;
int a[9][9];

void Try(int i, int diem){
    for(int j = 1; j <= 8 ; j++){
        if(cot[j] == 0 && cheo1[8 + i - j] == 0 && cheo2[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1 ; cheo1[8 + i - j] = 1 ; cheo2[i + j - 1] = 1;
            if(i == 8){
                maxdiem = max(maxdiem, diem + a[i][j]); //chọn lời giải tốt nhất, có tổng điểm cao nhất
            }
            else{
                Try(i + 1, diem + a[i][j]);
            }
            cot[j] = 0 ; cheo1[8 + i - j] = 0 ; cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        maxdiem = 0;
        cot.assign(8 + 1, 0);
        cheo1.assign(2 * 8 + 1, 0);
        cheo2.assign(2 * 8 + 1, 0);
        X.assign(8 + 1, 0);
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        Try(1,0);
        cout << maxdiem << endl;
    }
}