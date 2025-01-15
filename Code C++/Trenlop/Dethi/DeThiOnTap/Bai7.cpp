#include <bits/stdc++.h>
using namespace std;
class MaTranVuong{
	private:
		int capmt;
		int a[100][100];
	public:
		MaTranVuong(){
		}
		void nhap(){
			cout << "Nhap cap ma tran: ";
			cin >> capmt;
			for( int i = 0; i < capmt; i++){
				for(int j = 0; j < capmt; j++){
					cin >> a[i][j];
				}
			}
		}
		void in(){
			for( int i = 0; i < capmt; i++){
				for(int j = 0; j < capmt; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}
		int duongcheochinh(){
			int sum = 0;
			for( int i = 0; i < capmt; i++){
				for(int j = 0; j < capmt; j++){
					if(i == j){
						sum += a[i][j];
					}
				}
			}
			return sum;
		}
		int duongcheophu(){
			int sum = 0;
			for( int i = 0; i < capmt; i++){
				for(int j = 0; j < capmt; j++){
					if(i + j == capmt + 1){
						sum += a[i][j];
					}
				}
			}
			return sum;
		}
};
int main(){
	MaTranVuong mt;
	cout << "Nhap ma tran: " << endl;
	mt.nhap();
	cout << "Ma tran vua nhap: " << endl;
	mt.in();
	cout <<"Tong phan tu nam tren duong cheo chinh: " << mt.duongcheochinh() << endl;
	cout <<"Tong phan tu nam tren duong cheo phu: " << mt.duongcheophu() << endl;
}
