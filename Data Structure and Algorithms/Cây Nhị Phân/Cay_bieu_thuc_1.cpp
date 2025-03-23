#include <stack>
#include <iostream>
#include <string>
using namespace std;

// Định nghĩa cấu trúc node của cây biểu thức
struct Node {
    string data;
    Node* left;
    Node* right;
    
};

Node *makeNode(string x){
    Node *newNode = new Node;
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

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
            st.push(makeNode(string(1, c)));
        } else {
            // Nếu là toán tử, lấy hai node con từ stack
            Node* right = st.top(); st.pop();
            Node* left = st.top(); st.pop();
            
            // Tạo node toán tử mới và gán hai node con
            Node* opNode = makeNode(string(1, c));
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
string inorder(Node* root) {
    if (!root) return "";
    
    // Nếu là toán hạng, chỉ cần trả về giá trị
    if (!isOperator(root->data[0])) 
        return root->data;
    
    // Nếu là toán tử, thêm dấu ngoặc để giữ thứ tự
    return inorder(root->left) + " " + root->data + " " + inorder(root->right);
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string postfix;
        cin >> postfix;
        
        Node* root = constructTree(postfix);
        cout << inorder(root) << endl;
    }
    
    return 0;
}
