#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int menhgia[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2 ,1};
        int n; cin >> n;
        int cnt = 0;
        for(int x : menhgia){
            cnt += n / x;
            n %= x;
        }
        cout << cnt << endl;
    }
    
    
}