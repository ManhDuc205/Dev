#include <bits/stdc++.h>
using namespace std;
class MaTran{
	private:
		int hang,cot;
		int a[100][100];
	public:
		MaTran(){
			hang = 0;
			cot = 0;
			a[100][100] = {0};
		}
		MaTran(int hang, int cot){
			this->hang = hang;
			this->cot = cot;
		}
		void nhap(){
			cout << "Nhap hang: ";
			cin >> hang;
			cout << "Nhap cot: ";
			cin >> cot;
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					cout << "Nhap vao a [" << i  << "]" << "[" << j << "]";
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
		friend MaTran conghaimatran (MaTran mt1, MaTran mt2){
			if(mt1.hang != mt2.hang || mt1.cot != mt2.cot){
				cout << "Hai ma tran khong dong cap!" << endl;
			}
			MaTran sum(mt1.hang, mt1.cot);
			for(int i = 0; i < mt1.hang; i++){
				for(int j = 0; j < mt1.cot; j++){
					sum.a[i][j] = mt1.a[i][j] + mt2.a[i][j];
				}
			}
			return sum;
		}
};
int main(){
	MaTran mt1, mt2;
	cout << "Nhap ma tran 1: " << endl;
	mt1.nhap();
	cout << "Nhap ma tran 2: " << endl;
	mt2.nhap();
	cout << "Ma tran 1 vua nhap: " << endl;
	mt1.in();
	cout << "Ma tran 2 vua nhap: " << endl;
	mt2.in();
	cout << "Tong 2 ma tran: " <<endl;
	conghaimatran(mt1,mt2).in();
}
