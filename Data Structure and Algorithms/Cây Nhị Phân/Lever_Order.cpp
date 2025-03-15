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

void makeRoot(Node *root, int u, int v, char c) {
    if (c == 'L') root->left = new Node(v);
    else root->right = new Node(v);
}

void insertNode(Node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root->data == u) {
        makeRoot(root, u, v, c);
    } else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

int main() {
    Node *root = NULL;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root == NULL) {
            root = new Node(u);
            makeRoot(root, u, v, c);
        } else {
            insertNode(root, u, v, c);
        }
    }
}
