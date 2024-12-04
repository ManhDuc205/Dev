#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {5 , 4 , 3, 2, 1};
    for(int i = 0; i < 5; i++){
        cin >> *(a + i);
    }
    for(int i = 0; i < 5; i++){
        cout << *(a + i) << endl;
    }
}
    