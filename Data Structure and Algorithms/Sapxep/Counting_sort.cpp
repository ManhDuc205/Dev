/*
    Sắp xếp đếm phân phối là một phương pháp sắp xếp có độ phức tạp tuyến tính.
    count[max + 1] 
    Độ phức tạp : O(n + max)
    0 <= a <= 10^7
    Tư tưởng : đếm tần xuất xuất hiện của các phần tử trong mảng rồi in ra thứ tự 
*/
#include <bits/stdc++.h>
using namespace std;

int cnt[10000001];

int main(){
    int a[1000],n;
    cin >> n;
    int m = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        m = max(m, a[i]);
    }

    for(int i = 0; i <= m; i++){  // Vì mảng count sẽ lưu đến m thôi (count[m]=...)
        if(cnt[i] != 0){
            for(int j = 0; j < cnt[i]; j++){ 
                cout << i << " ";
            }
        }
    }
    return 0;
}
