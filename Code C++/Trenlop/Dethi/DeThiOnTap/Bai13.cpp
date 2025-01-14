#include <bits/stdc++.h>
using namespace std;
class MaTran{
	private:
		int hang, cot;
		int a[100][100];
	public:
		
		 MaTran(int hang = 0, int cot = 0) {
			this->hang = hang;
			this->cot = cot; 	
		}
		void nhap(){
			cout << "Nhap so hang: ";
			cin >> hang;
			cout << "Nhap so cot: ";
			cin >> cot;
			for(int i = 0; i < hang;i++){
				for(int j = 0; j < cot; j++){
					cin >> a[i][j];
				}
			}
		}
		void in(){
			for(int i = 0; i < hang;i++){
				for(int j = 0; j < cot; j++){
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}
		friend MaTran conghaimatran (const MaTran &mt1,const MaTran&mt2){
			if(mt1.cot != mt2.cot || mt1.hang != mt2.hang){
				cout << "Hai ma tran khong dong cap";
			}
			
			MaTran matran(mt1.hang, mt1.cot);
			for(int i = 0; i < mt1.hang; i++){
				for(int j = 0; j < mt1.cot ; j++){
					matran.a[i][j] = mt1.a[i][j] + mt2.a[i][j];
				}
			}
			return matran;
		}
};
int main(){
	MaTran mt1, mt2;
	cout << "Nhap ma tran thu 1: \n";
	mt1.nhap();
	cout << "Nhap ma tran thu 2: \n";
	mt2.nhap();
	cout << "Ma tran thu 1: \n";
	mt1.in();
	cout << "Ma tran thu 2: \n";
	mt2.in();
	cout << "Tong 2 ma tran: " << endl;
	conghaimatran(mt1, mt2).in();
	
}
