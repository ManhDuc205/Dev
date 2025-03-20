#include <iostream>
#include <queue>
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

int findIndex(int inorder[], int start, int end, int value){
    for(int i = start; i < end; i++){
        if(inorder[i] == value){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int inorder[], int levelOrder[], int n) {
    if (n == 0) return NULL;
    
    // Gốc của cây là phần tử đầu tiên của levelOrder
    Node* root = makeNode(levelOrder[0]);
    queue<Node*> q;
    q.push(root);
    int idx = 1;
    
    // Duyệt qua từng node trong levelOrder
    for (int i = 0; i < n; i++) {
        Node* cur = q.front();
        q.pop();
        
        // Tìm vị trí của node hiện tại trong inorder
        for (int j = 0; j < n; j++) {
            if (inorder[j] == cur->data) {
                // Nếu có phần tử bên trái trong inorder, thêm vào cây
                if (j > 0 && idx < n) {
                    cur->left = makeNode(levelOrder[idx++]);
                    q.push(cur->left);
                }
                // Nếu có phần tử bên phải trong inorder, thêm vào cây
                if (j < n - 1 && idx < n) {
                    cur->right = makeNode(levelOrder[idx++]);
                    q.push(cur->right);
                }
                break;
            }
        }
    }
    return root;
}

void postorder(Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int inorder[n], levelOrder[n];
        for(int i = 0; i < n; i++){
            cin >> inorder[i];
        }
        for(int i = 0; i < n; i++){
            cin >> levelOrder[i];
        }

        Node *root = buildTree(inorder , levelOrder, n);
        postorder(root);
        cout << endl;
    }
    return 0;
}