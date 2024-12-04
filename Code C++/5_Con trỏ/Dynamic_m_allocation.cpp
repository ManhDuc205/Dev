#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a = new int[1000000000];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    delete[]a;
}
    