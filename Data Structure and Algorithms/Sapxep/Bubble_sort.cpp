/*
    So sánh 2 phần tử và đưa phần tử lớn nhất nổi về cuối dãy  
    Trường hợp tốt: O(n^2)
    Trung bình: O(n^2)
    Trường hợp xấu: O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){
    for(int i =0 ; i < n-1; i++){
        for(int j = 0; j < n -i - 1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]); // không thích dùng swap thì tạo thêm 1 biến temp để đổi chỗ 2 phần tử 
            }
        }
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    BubbleSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}