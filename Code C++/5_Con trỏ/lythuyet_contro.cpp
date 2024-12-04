#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    int *ptr = &a;
    cout << "Dia chi cua bien a: " << &a <<endl;
    cout << "Gia tri cua con tro ptr: " << ptr << endl;
    cout << "Gia tri cua bien ma con tro ptr dang tro toi: " << *ptr << endl;

    for(int i = 0; i < 5; i++){
        cin >> *(a + i);
    }
    for(int i = 0; i < 5; i++){
        cout << *(a + i);
    }
}
    