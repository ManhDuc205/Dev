#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *makeNode(int x){
    Node *newNode = new Node;
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Hàm duyệt cây theo thứ tự NLR (Preorder)
void preorder(Node* root){
    if(root == NULL) return ;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// Hàm duyệt cây theo thứ tự LNR (Inorder)
void inorder(Node* root){
    if(root == NULL) return ;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// Hàm duyệt cây theo thứ tự LRN (Postorder)
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);      // Duyệt trái
    postorder(root->right);     // Duyệt phải
    cout << root->data << " ";  // Nút gốc
}

int main() {
    // Tạo cây nhị phân
    Node* root = makeNode(1);
    root->left = makeNode(2);
    root->right = makeNode(3);
    root->left->left = makeNode(4);
    root->left->right = makeNode(5);

    cout << " Preorder (NLR): ";
    preorder(root);
    cout << "\n Inorder (LNR): ";
    inorder(root);
    cout << "\n Postorder (LRN): ";
    postorder(root);
    
    return 0;
}