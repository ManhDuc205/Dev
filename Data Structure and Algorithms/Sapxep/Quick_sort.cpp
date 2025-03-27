#include <iostream>
#include <algorithm>

using namespace std;

void QuickSort(int a[], int left, int right){
    int x = a[(left + right) / 2];
    int i = left, j = right;
    do{
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j){
            swap(a[i], a[j]);
            i++; j--;
        }
    }while (i <= j);
    if(left < j){
        QuickSort(a, left, j);
    }
    if(i < right){
       QuickSort(a, i, right);
    }
    
}
int main(){
    int n; cin >> n;
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
