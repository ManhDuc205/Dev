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
// LRN
void postorder(Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int idx = 0;

int findIndex(int inorder[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value) return i;
    }
    return -1;
}

Node* buildTree(int inorder[], int preorder[], int start, int end) {
    if (start > end) return NULL;
    
    int rootValue = preorder[idx++];
    Node* root = makeNode(rootValue);
    
    int inorderIndex = findIndex(inorder, start, end, rootValue);
    
    root->left = buildTree(inorder, preorder, start, inorderIndex - 1);
    root->right = buildTree(inorder, preorder, inorderIndex + 1, end);
    
    return root;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int inorder[n], preorder[n];
        for(int i = 0; i < n; i++){
            cin >> inorder[i];
        }
        for(int i = 0; i < n; i++){
            cin >>preorder[i];
        }
        idx = 0;
        Node* root = buildTree(inorder, preorder, 0, n - 1);
        postorder(root);
        cout << "\n";
    }
}