#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[7] = {5, 5, 1, 2, 3, 4, 1};
    set<int> se(a, a + 7);
    auto it = se.find(3);
    if (it != se.begin()) {
        --it;
        se.erase(it);
    }
    for (int x : se) {
        cout << x << ' ';
    }
    return 0;
}
