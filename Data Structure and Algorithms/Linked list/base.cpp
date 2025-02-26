#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

typedef struct Node* node;

// Cập phát động một node mới với dữ liệu là số nguyên
node makeNode(int x){
    node temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

// Kiem tra rong
bool empty(node a){
    return a == NULL;
}

int Size(node a){
    int count = 0;
    while(a != NULL){
        ++count;
        a = a->next; // gán địa chỉ của node tiếp theo cho node hiện tại
    }
    return count;
}

//thêm một phần tử vào đầu dslk
void insertFirst(node &a, int x){
    node tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }

}

//Thêm một phần tử vào cuối dslk
void insertLast(node &a, int x ){
    node tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}

//Xóa phần tử ở giữa 
void deleteMiddle(node &a, int pos){
    if(pos <= 0 || pos > Size(a)) return;
    node p = NULL, M = a;
    for(int i = 1; i < pos; i++){
        p = M;
        M = M ->next;
    }
    if(p == NULL){
        a = a->next;

    }
    else {
        p->next = M->next;
    }
}
int main(){
    cout << sizeof(Node) << endl;
}
