#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, s, m;
        cin >> n >> s >> m;
        
        // Nếu nhu cầu hàng ngày lớn hơn số lượng có thể mua thì không đủ
        if (m > n) {
            cout << "-1\n";
            continue;
        }

        // Tổng số ngày có thể mua lương thực
        long long daysCanBuy = s - s / 7;
        
        // Tổng số ngày cần mua lương thực
        long long daysNeeded = (m * s + n - 1) / n;
        
        // Kiểm tra nếu đủ số ngày mua thì in ra, nếu không thì -1
        if (daysNeeded <= daysCanBuy) {
            cout << daysNeeded << '\n';
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
