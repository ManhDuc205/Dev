/*
Bài 72. Factory Machine
Một nhà máy có n máy có thể được sử dụng để tạo ra sản phẩm. Mục tiêu của bạn là tạo
ra tổng số sản phẩm.
Đối với mỗi máy, bạn biết số giây nó cần để tạo ra một sản phẩm. Các máy có thể hoạt
động đồng thời và bạn có thể tự do quyết định lịch trình của chúng.
Thời gian ngắn nhất cần thiết để làm ra t sản phẩm là bao nhiêu?
Input
Dòng nhập đầu tiên có hai số nguyên n và t: số lượng máy móc và sản phẩm.
Dòng tiếp theo ghi n số nguyên k1, k2,…, kn: thời gian cần thiết để tạo ra một sản phẩm
sử dụng mỗi máy.
Output
In một số nguyên: thời gian tối thiểu cần thiết để tạo ra t sản phẩm.
Ràng buộc
1≤n≤2⋅105
1≤t≤109
1≤ki≤109
Ví dụ
Input       Output
3 7
3 2 5
            8
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#define ll long long
using namespace std;

bool check(int a[], int n, int t, int time){
    ll dem = 0;
    for(int i = 0; i < n; i++){
        dem += time / a[i];
    }
    return dem >= t;
}

int main(){
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    ll left = 0, right = 1ll * ( *min_element(a, a + n) * t);
    ll ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, n, t, mid)){
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    cout << ans << endl;
}