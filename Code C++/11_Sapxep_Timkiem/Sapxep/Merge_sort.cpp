/*
    Tư tưởng: Thuật toán sắp xếp trộn sử dụng phương pháp chia 
    để trị, chia dãy ban đầu thành các dãy con cho tới khi dãy 
    chỉ còn 1 phần tử, sau đó thực hiện trộn 2 dãy con tăng dần
    thành 1 dãy tăng dần với độ phức tạo tuyến tính 
    Độ phức tạp : O(nlogn)
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    vector<int> x(a + l , a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l] = x[i]; ++l; ++i;
        }
        else {
            a[l] = y[j]; ++l; ++j;
        }
    }
    while(i < x.size()){
        a[l] = x[i]; ++l; ++i;
    }
    while(j < y.size()){
        a[l] = y[j]; ++l; ++j;
    }
}

void mergeSort(int a[], int l, int r){
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a , l , m , r);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for(int x : a){
        cout << x << " ";
    }
    return 0;
}