#include <bits/stdc++.h>
using namespace std;
class MaTran{
	private:
		int hang, cot;
		int a[100][100];
	public:
		MaTran(){
		}
		void nhap(){
			cout << "Nhap so hang: ";
			cin >> hang;
			cout << "Nhap so cot: ";
			cin >> cot;
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					cin >> a[i][j];
				}
			}
			
		}
		void in(){
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}
		int tong(){
			int sum = 0;
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					if(i == 0 || j == 0 || i == hang - 1 || j == cot - 1){
						sum += a[i][j];
					}
				}		
			}
			return sum;
		}
};
int main(){
	MaTran mt;
	cout << "Nhap vao ma tran: " << endl;
	mt.nhap();
	cout << "Ma tran vua nhap: " << endl;
	mt.in();
	cout << "tong cac phan tu nam tren 4 duong vien: " << mt.tong() << endl;
}
