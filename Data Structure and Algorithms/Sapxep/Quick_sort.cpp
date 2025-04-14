#include <iostream>     // Thư viện dùng để nhập xuất
#include <algorithm>    // Thư viện chứa hàm swap

using namespace std;

// Hàm sắp xếp nhanh (QuickSort)
void QuickSort(int a[], int left, int right){
    // Chọn phần tử trung tâm làm chốt (pivot)
    int x = a[(left + right) / 2];
    int i = left, j = right;

    // Bắt đầu chia mảng
    do{
        // Tìm phần tử bên trái lớn hơn hoặc bằng pivot
        while(a[i] < x) i++;
        // Tìm phần tử bên phải nhỏ hơn hoặc bằng pivot
        while(a[j] > x) j--;
        
        // Nếu i và j chưa vượt qua nhau thì hoán đổi
        if(i <= j){
            swap(a[i], a[j]); // Hoán đổi hai phần tử
            i++; j--;         // Tiếp tục dịch chuyển chỉ số
        }
    } while (i <= j); // Lặp lại cho đến khi hai chỉ số vượt qua nhau

    // Đệ quy sắp xếp các phần bên trái và phải
    if(left < j){
        QuickSort(a, left, j);   // Sắp xếp bên trái
    }
    if(i < right){
       QuickSort(a, i, right);   // Sắp xếp bên phải
    }
}

int main(){
    int n;
    cin >> n;           

    int a[50];          
    for(int i = 0; i < n; i++){
        cin >> a[i];    
    }

    QuickSort(a, 0, n - 1);
  
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
