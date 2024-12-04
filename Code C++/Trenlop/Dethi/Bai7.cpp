/*
Câu 7: Viết chương trình thực hiện các yêu cầu sau:
Khai báo lớp ma trận vuông với các thuộc tính: cấp ma trận, các phần tử của ma trận.
Xây dựng các phương thức: nhập, xuất một đối tượng ma trận.
Nhập và 1 ma trận. In ra màn hình ma trận vừa nhập. Tính tổng các phần tử nằm trên 
đường chéo chính, tổng các phần tử nằm trên đường chéo phụ của ma trận.
*/
#include <iostream>
#include <vector>
using namespace std;
class MaTranVuong {
    private:
        int cap; // m * n la cap cua ma tran thong thuong
        int v[50][50];
        
    public:
    MaTranVuong (){
        cap = 0;
        
    }
    void nhap(){
        cout << "Nhap cap cua ma tran: ";
        cin >> cap;
        for(int i = 0; i < cap; i++){
            for(int j = 0; j <cap; j++){
                cout << "Phan tu [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> v[i][j];
            }
        }
    }
    void in(){
        cout <<"Ma tran vua nhap la: " << endl;
        for(int i = 0; i < cap; i++){
            for(int j = 0; j <cap; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    int tongDuongCheoChinh(){
        int sumcc = 0;
        for(int i = 0; i < cap; i++){
            for(int j = 0; j <cap; j++){
                if(i == j){
                    sumcc += v[i][j];
                }
            }
            
        }
        return sumcc;
    }
    int tongDuongCheoPhu(){
        int sumcp = 0;
        for(int i = 0; i < cap; i++){
            for(int j = 0; j < cap; j++){
                if( cap - 1 == i + j){
                    sumcp += v[i][j];
                }
            }
            
        }
        return sumcp;
    }
};
int main(){
    MaTranVuong a;
    a.nhap();
    a.in();
    cout << "Tong cac phan tu nam tren duong cheo chinh la: " <<  a.tongDuongCheoChinh() << endl;
    cout << "Tong cac phan tu nam tren duong cheo phu la: "<<  a.tongDuongCheoPhu() << endl;

}