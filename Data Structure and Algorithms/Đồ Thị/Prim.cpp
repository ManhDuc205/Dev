#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Cấu trúc lưu cạnh theo dạng danh sách kề: ke[u] = {v, w}
vector<pair<int, int>> ke[100001];
bool taken[100001]; // Đánh dấu đỉnh đã được thêm vào cây khung
int n, m; // Số đỉnh và số cạnh

// Nhập đồ thị
void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w}); // Đồ thị vô hướng => lưu cả hai chiều
    }
}

// Thuật toán Prim – Tìm cây khung nhỏ nhất
void Prim(int s) {
    taken[s] = true; // Đưa đỉnh s vào cây khung

    // Min-heap: Ưu tiên cạnh có trọng số nhỏ nhất
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    // Thêm các cạnh kề với s vào heap
    for (auto it : ke[s]) {
        int t = it.first; // đỉnh kề
        int w = it.second; // trọng số
        if (!taken[t]) Q.push({w, t});
    }

    int d = 0; // Tổng trọng số của cây khung

    // Lặp cho đến khi heap rỗng
    while (!Q.empty()) {
        auto e = Q.top(); Q.pop();
        int w = e.first;
        int u = e.second;

        if (!taken[u]) {
            d += w;           // Cộng trọng số vào kết quả
            taken[u] = true;  // Đánh dấu u đã vào cây khung

            // Thêm các cạnh kề u vào heap
            for (auto it : ke[u]) {
                if (!taken[it.first]) {
                    Q.push({it.second, it.first});
                }
            }
        }
    }

    cout << d << endl; // In tổng trọng số cây khung nhỏ nhất
}

// Hàm main
int main() {
    nhap();      // Nhập đồ thị
    Prim(1);     // Bắt đầu từ đỉnh 1
    return 0;
}
