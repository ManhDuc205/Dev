/*
    Ở mỗi của thuật toán sẽ cố gắng đưa phần tử ở vị trí hiện tại về đúng vị trí bằng 
    cách chèn nó vào dãy các phần tử đứng trước nó sao cho đúng thứ tự
    Trung bình: O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int x = a[i], pos = i - 1;
        while(pos >= 0 && x < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    InsertionSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}