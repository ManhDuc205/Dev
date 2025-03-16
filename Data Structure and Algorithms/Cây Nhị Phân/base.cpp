#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    
    // Constructor để khởi tạo node
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

// Hàm duyệt cây theo thứ tự NLR (Preorder)
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Hàm duyệt cây theo thứ tự LNR (Inorder)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Hàm duyệt cây theo thứ tự LRN (Postorder)
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Tạo cây nhị phân với constructor
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << " Preorder (NLR): ";
    preorder(root);
    cout << "\n Inorder (LNR): ";
    inorder(root);
    cout << "\n Postorder (LRN): ";
    postorder(root);

    return 0;
}

/*
Lý thuyết về cây nhị phân
1. Định nghĩa
Cây nhị phân (Binary Tree) là một cấu trúc dữ liệu cây trong đó mỗi nút có tối đa hai con: con trái và con phải.

2. Các loại cây nhị phân
Cây nhị phân đầy đủ (Full Binary Tree): Mỗi nút có 0 hoặc 2 con.
Cây nhị phân hoàn chỉnh (Complete Binary Tree): Tất cả các mức, trừ mức cuối cùng, đều đầy đủ. Ở mức cuối, các nút được điền từ trái sang phải.
Cây nhị phân cân bằng (Balanced Binary Tree): Chênh lệch chiều cao giữa hai cây con của mỗi nút không quá 1.
Cây nhị phân tìm kiếm (Binary Search Tree - BST): Mỗi nút có giá trị lớn hơn tất cả các nút trong cây con trái và nhỏ hơn tất cả các nút trong cây con phải.
3. Các phép duyệt cây
Duyệt trước (Preorder - NLR): Nút gốc → Cây con trái → Cây con phải.
Duyệt giữa (Inorder - LNR): Cây con trái → Nút gốc → Cây con phải.
Duyệt sau (Postorder - LRN): Cây con trái → Cây con phải → Nút gốc.
Duyệt theo mức (Level-order): Duyệt từng mức của cây từ trên xuống dưới, từ trái qua phải.
*/
