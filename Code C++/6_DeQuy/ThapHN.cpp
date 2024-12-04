#include <bits/stdc++.h>
using namespace std;
// Hàm đệ quy để giải bài toán Tháp Hà Nội
void thap_ha_noi(int n, char s, char a, char d) {
    // Điều kiện dừng: Nếu chỉ còn 1 đĩa, di chuyển đĩa đó từ cọc nguồn (s) sang cọc đích (d)
    if (n == 1) {
        cout << s << " sang " << d << endl;
        return;
    }
    // Di chuyển n-1 đĩa từ cọc nguồn (s) sang cọc trung gian (a) bằng cách sử dụng cọc đích (d)
    thap_ha_noi(n-1, s, d, a);
    // Di chuyển đĩa thứ n từ cọc nguồn (s) sang cọc đích (d)
    cout << s << " sang " << d << endl;
    // Di chuyển n-1 đĩa từ cọc trung gian (a) sang cọc đích (d) bằng cách sử dụng cọc nguồn (s)
    thap_ha_noi(n-1, a, s, d);
}
int main() {
    cout << "Nhap so dia ";
    int n;
    cin >> n;
    thap_ha_noi(n, 'A', 'B', 'C'); // Gọi hàm thap_ha_noi với cọc nguồn là 'A', cọc trung gian là 'B', và cọc đích là 'C'
    return 0;
}
