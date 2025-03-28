#include <iostream>
#include <sstream>
#include <queue>
#include <stack>
using namespace std;

// Cấu trúc node của cây biểu thức
struct Node {
    string val;
    Node* left;
    Node* right;
};

Node *makeNode(string s){
    Node *newNode = new Node;
    newNode->val = s;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Xây dựng cây từ danh sách node
Node* buildTree(vector<string>& nodes) {
    if (nodes.empty()) return NULL;
    queue<Node*> q;
    Node* root = makeNode(nodes[0]);
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        Node* curr = q.front(); q.pop();
        
        if (i < nodes.size()) {
            curr->left = makeNode(nodes[i++]);
            q.push(curr->left);
        }
        if (i < nodes.size()) {
            curr->right = makeNode(nodes[i++]);
            q.push(curr->right);
        }
    }
    return root;
}

// Đánh giá biểu thức theo duyệt hậu tố
int evaluate(Node* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return stoi(root->val);
    
    int leftVal = evaluate(root->left);
    int rightVal = evaluate(root->right);
    
    if (root->val == "+") return leftVal + rightVal;
    if (root->val == "-") return leftVal - rightVal;
    if (root->val == "*") return leftVal * rightVal;
    if (root->val == "/") return leftVal / rightVal;
    
    return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cin.ignore();
        string line;
        getline(cin, line);
        
        stringstream ss(line);
        vector<string> nodes;
        string temp;
        while (ss >> temp) {
            nodes.push_back(temp);
        }
        
        Node* root = buildTree(nodes);
        cout << evaluate(root) << endl;
    }
    return 0;
}
