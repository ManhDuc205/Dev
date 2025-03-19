/*
    Ở mỗi bước của thuật toán luôn đưa phần tử nhỏ nhất về đầu dãy 
    Để sắp được thì ta cần n-1 bước 
    Trường hợp tốt: O(n^2)
    Trung bình: O(n^2)
    Trường hợp xấu: O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        //Dùng một biến để lưu chỉ số của phần tử nhỏ nhất
        int min_pos = i;
        // Duyệt tất cả các phần tử đứng sau phần tử hiện tại và cập nhật chỉ số của phần tử nhỏ nhất 
        for(int j= i+1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    selectionSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}