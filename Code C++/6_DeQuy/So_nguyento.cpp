#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n, int divisor = -1) {
    if (n <= 1) {
        return false;
    }
    if (divisor == -1) {
        divisor = n - 1;
    }
    if (divisor == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return is_prime(n, divisor - 1);
}
int main() {
    int n;
    cin >> n;
    if (is_prime(n)) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai so nguyen to" << endl;
    }
    return 0;
}
