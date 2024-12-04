/*
- Hàm ảo cho phép ghi đè (override) hành vi của hàm trong lớp dẫn xuất (derived class), 
trong khi vẫn giữ được tính nhất quán thông qua con trỏ hoặc tham chiếu tới lớp cơ sở (base class).
- Nhờ đó, đối tượng được xử lý theo kiểu động, nghĩa là hành vi của nó được xác định tại thời điểm 
chạy (runtime) thay vì thời điểm biên dịch (compile-time).
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { // Hàm ảo
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Ghi đè hàm ảo
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->display(); // Gọi hàm của Derived nhờ tính đa hình

    return 0;
}
