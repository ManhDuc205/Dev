#include <iostream>
#include <algorithm>
using namespace std;
int n, a[100], final = 0;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }

}
void sinh(){
    int i = n - 1;
    //tìm vị trí i đầu tiên mà a[i] < a[i+1]
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        final = 1;
    }
    else {
        int j = n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }

}
int main(){
    cin >> n;
    ktao();
    while(final == 0){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}