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

void makeRoot(Node *root, int u, int v, char c){
    if(c == 'L') root->left = makeNode(v);
    else root->right = makeNode(v);
}

void insertNode(Node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->data == u){
        makeRoot(root, u, v, c);
    }
    else{
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

int main(){
    Node *root = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int u, v;
        char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = makeNode(u);
            makeRoot(root, u, v, c);
        }
        else {
            insertNode(root, u, v, c);
        }
    }
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
