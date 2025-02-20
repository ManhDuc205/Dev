#include <iostream>
using namespace std;

int X[9], cot[9], cheo1[16], cheo2[16], maxSum = 0, diem[9][9];

void Try(int i, int currentSum){
    for(int j = 1; j <= 8; j++){
        if(cot[j] == 0 && cheo1[8 + i - j] == 0 && cheo2[i + j - 1] == 0 ){
            X[i] = j;
            cot[j] = 1; cheo1[8 + i - j] = 1; cheo2[i + j - 1] = 1;
            if(i == 8){
                maxSum = max(maxSum, currentSum + diem[i][j]);
            }
            else{
                Try(i + 1, currentSum + diem[i][j]);
            }
            cot[j] = 0; cheo1[8 + i - j] = 0; cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        maxSum = 0;
        for (int i = 1; i <= 8; i++) {
            cot[i] = 0;
        }
        for (int i = 1; i <= 15; i++) {
            cheo1[i] = 0;
            cheo2[i] = 0;
        }
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> diem[i][j];
            }
        }
        Try(1, 0);
        cout << maxSum  << endl;
    }
    
}