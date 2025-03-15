#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

// Hàm chèn một node vào cây BST
Node* insertBST(Node* root, int x) {
    if (root == NULL) return new Node(x);
    if (x < root->data) root->left = insertBST(root->left, x);
    else root->right = insertBST(root->right, x);
    return root;
}

// Hàm xây dựng BST từ level-order
Node* buildBST(int arr[], int n) {
    if (n == 0) return NULL;
    Node* root = new Node(arr[0]); // Phần tử đầu tiên là gốc
    for (int i = 1; i < n; i++) {
        insertBST(root, arr[i]); // Chèn từng phần tử vào BST
    }
    return root;
}

// Hàm duyệt Preorder (NLR)
void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Node* root = buildBST(arr, N);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
