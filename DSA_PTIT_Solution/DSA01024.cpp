#include <bits/stdc++.h>
using namespace std;

int N, K; // Biến toàn cục lưu số lượng tên (N) và số lượng tên trong mỗi tổ hợp (K)
vector<string> names; // Danh sách tên sau khi loại bỏ trùng lặp và sắp xếp theo thứ tự từ điển
vector<string> combination; // Mảng tạm để lưu tổ hợp hiện tại

// Hàm đệ quy để tạo tất cả các tổ hợp từ danh sách tên
void generate_combinations(int start, int depth) {
    if (depth == K) { // Nếu đã chọn đủ K phần tử
        for (int i = 0; i < K; i++) {
            if (i > 0) cout << " "; // Thêm khoảng cách giữa các tên
            cout << combination[i]; // In ra tên trong tổ hợp
        }
        cout << "\n"; // Xuống dòng sau mỗi tổ hợp
        return;
    }
    
    for (int i = start; i < names.size(); i++) { // Duyệt từ chỉ mục start đến hết danh sách
        combination[depth] = names[i]; // Chọn tên thứ depth vào tổ hợp
        generate_combinations(i + 1, depth + 1); // Đệ quy để chọn tên tiếp theo
    }
}

int main() {
    cin >> N >> K; // Nhập số lượng tên và số lượng phần tử trong tổ hợp
    set<string> unique_names; // Sử dụng set để tự động loại bỏ tên trùng
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name; // Nhập tên
        unique_names.insert(name); // Thêm vào set để loại bỏ trùng lặp
    }
    
    names.assign(unique_names.begin(), unique_names.end()); // Chuyển set thành vector và sắp xếp theo thứ tự từ điển
    combination.resize(K); // Cấp phát bộ nhớ cho mảng tổ hợp
    
    generate_combinations(0, 0); // Gọi hàm đệ quy để tạo tổ hợp
    
    return 0;
}
