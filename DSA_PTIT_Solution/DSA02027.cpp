#include <iostream>
#include <vector>
using namespace std;
bool visited[20];
int minCost = 1000, n; 
int C[20][20];

void Try(int city, int cnt, int cost){
    
    if(cnt == n){
        if(C[city][1] > 0){ // quay lại thành phố 1
            minCost = min(minCost, cost + C[city][1]);
        }
    }
    for(int i = 2; i <= n; i++){
        if(!visited[i] && C[city][i] > 0){
            visited[i] = true;
            Try(i, cnt + 1, cost + C[city][i]);
            visited[i] = false;
        }
        
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> C[i][j];
        }
    }

    visited[1] = true; // bắt đầu từ thành phố 1
    Try(1, 1, 0);
    cout << minCost << endl;
    return 0;
}