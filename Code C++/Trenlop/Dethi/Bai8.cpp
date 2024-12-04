/*
Câu 8: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp ma trận với các thuộc tính: số hàng, số cột, các phần tử của ma trận.
Xây dựng các phương thức: nhập, xuất một đối tượng ma trận.
Nhập vào 1 ma trận. In ra màn hình ma trận vừa nhập. Tính tổng các phần tử nằm trên
4 đường viền của ma trận.

*/
#include <iostream>
#include <vector>
using namespace std;
class MaTranVuong {
    private:
        int n, m; // m hàng n cột
        int v[50][50];
        
    public:
    MaTranVuong (){
        n = 0;
        m = 0;
        
    }
    void nhap(){
        cout << "Nhap cap cua ma tran n x m: ";
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << "Phan tu [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> v[i][j];
            }
        }
    }
    void in(){
        cout <<"Ma tran vua nhap la: " << endl;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    int tongPtDuongVien(){
        int sumdv = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0 || i == m - 1 || j == n - 1){
                    sumdv += v[i][j];
                }
            }
        }
        return sumdv;
    }
};
int main(){
    MaTranVuong a;
    a.nhap();
    a.in();
    cout << "Tong cac phan tu nam tren duong vien cua ma tran: " << a.tongPtDuongVien() << endl;
}