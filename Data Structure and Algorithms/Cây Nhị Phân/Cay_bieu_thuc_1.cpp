#include <bits/stdc++.h>
using namespace std;

// Định nghĩa cấu trúc node của cây biểu thức
struct Node {
    string value;
    Node* left;
    Node* right;
    
    Node(string val) {
        value = val;
        left = right = nullptr;
    }
};

// Hàm kiểm tra xem một ký tự có phải là toán tử không
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Hàm xây dựng cây biểu thức từ biểu thức hậu tố
Node* constructTree(string postfix) {
    stack<Node*> st;
    
    for (char c : postfix) {
        if (!isOperator(c)) {
            // Nếu là toán hạng, tạo node mới và đưa vào stack
            st.push(new Node(string(1, c)));
        } else {
            // Nếu là toán tử, lấy hai node con từ stack
            Node* right = st.top(); st.pop();
            Node* left = st.top(); st.pop();
            
            // Tạo node toán tử mới và gán hai node con
            Node* opNode = new Node(string(1, c));
            opNode->left = left;
            opNode->right = right;
            
            // Đưa node toán tử vào stack
            st.push(opNode);
        }
    }
    
    // Node còn lại trong stack là gốc của cây
    return st.top();
}

// Hàm duyệt cây theo thứ tự giữa (infix) với dấu ngoặc tối ưu
string inorderTraversal(Node* root) {
    if (!root) return "";
    
    // Nếu là toán hạng, chỉ cần trả về giá trị
    if (!isOperator(root->value[0])) 
        return root->value;
    
    // Nếu là toán tử, thêm dấu ngoặc để giữ thứ tự
    return inorderTraversal(root->left) + " " + root->value + " " + inorderTraversal(root->right);
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string postfix;
        cin >> postfix;
        
        Node* root = constructTree(postfix);
        cout << inorderTraversal(root) << endl;
    }
    
    return 0;
}
