#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solveTestCase() {
    int N, K;
    cin >> N >> K;
    vector<int> current(K);
    
    for (int i = 0; i < K; i++) {
        cin >> current[i];
    }
    
    vector<int> next = current;
    
    // Tìm tổ hợp tiếp theo
    int i = K - 1;
    while (i >= 0 && next[i] == N - K + i + 1) {
        i--;
    }
    
    if (i < 0) {
        cout << K << "\n";
        return;
    }
    
    next[i]++;
    for (int j = i + 1; j < K; j++) {
        next[j] = next[j - 1] + 1;
    }
    
    // Đếm số phần tử bị thay đổi
    int count = 0;
    for (int j = 0; j < K; j++) {
        if (find(next.begin(), next.end(), current[j]) == next.end()) {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solveTestCase();
    }
    return 0;
}
