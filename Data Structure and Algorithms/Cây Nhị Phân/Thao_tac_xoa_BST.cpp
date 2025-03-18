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

Node *minNode(Node *root){
    Node *temp = root;
    while(temp != NULL && temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// Hàm duyệt cây theo thứ tự LNR (Inorder)
void inorder(Node* root){
    if(root == NULL) return ;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *DeleteNode(Node *root, int key){
    if(root == NULL) return root;
    if(key < root->data){
        root->left = DeleteNode(root->left, key);
    }
    else if(key > root->data){
        root->right = DeleteNode(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL){
            Node *tmp = root->left;
            delete root;
            return tmp;
        }
        else{
            Node *tmp = minNode(root->right);
            root->data = tmp->data;
            root->right = DeleteNode(root->right, tmp->data);
        }
    }
    return root;
}

int main() {
    Node *root = makeNode(5);
    root->left = makeNode(3);
    root->right = makeNode(8);
    root->left->left = makeNode(2);
    root->left->right = makeNode(4);
    root->right->left = makeNode(6);
    root->right->right = makeNode(9);

    cout << "Truoc khi xoa 3: ";
    inorder(root);
    cout << endl;

    root = DeleteNode(root, 3);

    cout << "Sau khi xoa 3: ";
    inorder(root);
    cout << endl;

    return 0;
}