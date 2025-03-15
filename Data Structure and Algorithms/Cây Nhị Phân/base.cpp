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
