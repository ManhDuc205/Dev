/*dãy tăng chặt :
    vd : 1 2 2 7 8 không phải dãy tăng chặt
    =>>  1 2 3 7 8 sẽ là dãy tăng chặt   
*/

#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0;i<n; i++){
        cin >> a[i];
    }
    long long res = 0;
    int tmp = 0;
    for(int i=1; i<n; i++){
        if(a[i] <= a[i-1]){
            int tmp = (a[i-1] - a[i] + 1);
            res += tmp;
            a[i-1] += tmp;
        }
    }
    cout << res << endl;
}