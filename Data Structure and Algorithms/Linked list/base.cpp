#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
typedef struct Node* node;

// Cấp phát động một node mới với dữ liệu là số nguyên
node makeNode(int x){
    node temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

// Kiểm tra danh sách rỗng
bool empty(node a){
    return a == NULL;
}

// Đếm số phần tử trong danh sách
int Size(node a){
    int count = 0;
    while(a != NULL){
        ++count;
        a = a->next;
    }
    return count;
}

// Thêm một phần tử vào đầu danh sách
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

// Thêm một phần tử vào cuối danh sách
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

// Thêm phần tử vào giữa danh sách
void insertMiddle(node &a, int x, int pos){
    if(pos <= 0 || pos > Size(a) + 1) return;
    node tmp = makeNode(x);
    if(pos == 1){
        insertFirst(a, x);
        return;
    }
    node p = a;
    for(int i = 1; i < pos - 1; i++){
        p = p->next;
    }
    tmp->next = p->next;
    p->next = tmp;
}

// Xóa phần tử ở đầu danh sách
void deleteFirst(node &a){
    if(a == NULL) return;
    a = a->next;
}

// Xóa phần tử ở giữa danh sách
void deleteMiddle(node &a, int pos){
    if(pos <= 0 || pos > Size(a)) return;
    node p = NULL, M = a;
    for(int i = 1; i < pos; i++){
        p = M;
        M = M->next;
    }
    if(p == NULL){
        a = a->next;
    }
    else {
        p->next = M->next;
    }
}

// Xóa phần tử ở cuối danh sách
void deleteLast(node &a){
    if(a == NULL) return;
    node p = NULL, M = a;
    while(M->next != NULL){
        p = M;
        M = M->next;
    }
    if(p == NULL){
        a = NULL;
    }
    else {
        p->next = NULL;
    }
}

// In danh sách liên kết
void printList(node a){
    cout << "Danh sach lien ket: ";
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << "\n";
}

int main(){
    node head = NULL;
    int choice, value, pos;
    while(1){
        cout << "1. Chen vao dau danh sach\n";
        cout << "2. Chen vao cuoi danh sach\n";
        cout << "3. Chen vao giua danh sach\n";
        cout << "4. Xoa phan tu o dau danh sach\n";
        cout << "5. Xoa phan tu o giua danh sach\n";
        cout << "6. Xoa phan tu o cuoi danh sach\n";
        cout << "7. Duyet danh sach lien ket\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Nhap gia tri can chen: ";
                cin >> value;
                insertFirst(head, value);
                break;
            case 2:
                cout << "Nhap gia tri can chen: ";
                cin >> value;
                insertLast(head, value);
                break;
            case 3:
                cout << "Nhap gia tri can chen: ";
                cin >> value;
                cout << "Nhap vi tri can chen: ";
                cin >> pos;
                insertMiddle(head, value, pos);
                break;
            case 4:
                deleteFirst(head);
                break;
            case 5:
                cout << "Nhap vi tri can xoa: ";
                cin >> pos;
                deleteMiddle(head, pos);
                break;
            case 6:
                deleteLast(head);
                break;
            case 7:
                printList(head);
                break;
            case 0:
                return 0;
            default:
                cout << "Lua chon khong hop le!\n";
        }
    }
}
