#include <iostream>
using namespace std;
class Array{
    private:
        int x[50];
        string tenmang;
        int sopt;
    public:

        Array(){

        }
        void setSopt(int sopt){
            this->sopt = sopt;
        }
        int getSopt(){
            return sopt;
        }
        void nhap(){
            for(int i = 0; i < sopt; i++){
                cin >> x[i];
            }
        }
        void xuat(){
            for(int i = 0; i < sopt; i++){
                cout << x[i] << " ";
            }
        }

        int sumpt(){
            int sum = 0;
            for(int i = 0 ; i < sopt; i++){
                if(x[i] % 2 == 0){
                    sum += i;
                }
                
            }
            return sum;
        }

        int maxpt (){
            int max = x[0];
            for(int i =1; i < sopt; i++){
                if(max < x[i]){
                    max = x[i];
                }
            }
            return max;
        }

        void sapxep(){
            for(int i = 0; i < sopt - 1; i++){
                for(int j = i + 1; j < sopt; j++){
                    int temp = 0;
                    if(x[i] > x[j]){
                        temp = x[i];
                        x[i] = x[j];
                        x[j] = temp;
                    }
                }
            }
        }
};
int main(){
    Array a;
    int n;
    cout << "Nhap so pt trong mang: "; cin >> n;
    a.setSopt(n);
    a.nhap();
    cout << " Tong so pt chan: " << a.sumpt() << endl;
    cout << "Phan tu lon nhat: " << a.maxpt() << endl;
    a.sapxep();
    a.xuat();
    return 0;
    
}