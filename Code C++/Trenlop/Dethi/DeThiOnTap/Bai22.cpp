#include <bits/stdc++.h>
using namespace std;
class SP1{
	protected:
		int phanthuc, phanao;
	public:
		SP1(){
			phanthuc = 0;
			phanao = 0;
		}
		SP1(int phanthuc, int phanao){
			this->phanthuc = phanthuc;
			this->phanao = phanao;
		}
		void nhap(){
			cout << "Nhap phan thuc: ";
			cin >> phanthuc;
			cout << "Nhap phan ao: ";
			cin >> phanao;
		}
		void in(){
			if(phanthuc != 0){
				if(phanao > 0){
					cout << phanthuc << "+" << phanao << "i" <<endl;
				}
				else if (phanao < 0){
					cout << phanthuc << "-" << -phanao << "i" <<endl;
				}
				else cout << phanthuc << endl;
			}
			else cout << phanao << "i" <<endl;
		}
		float module(){
			return sqrt(phanthuc * phanthuc + phanao * phanao);
		}
};
class SP2 : public SP1{
	public:
		SP2() : SP1(){
		}
		SP2(int phanthuc, int phanao) : SP1(phanthuc, phanao){
		}
		SP2 &operator = (const SP2 &sp2){
			if(this != &sp2){
				this->phanthuc = sp2.phanthuc;
				this->phanao = sp2.phanao;
			}
			return *this;
		}
		bool operator < (SP2 sp2){
			return this->module() < sp2.module();
		}
};
int main(){
	int n;
	cout << "Nhap so luong so phuc: ";
	cin >> n;
	SP2 sp2[10];
	for (int i = 0; i < n; i++){
		sp2[i].nhap();
	}
	cout << "So phuc da nhap: " <<endl;
	for (int i = 0; i < n; i++){
		sp2[i].in();
	}
	SP2 spmax;
	SP2 spmin = sp2[0];
	for(int i = 0 ; i < n; i++){
		if(spmax < sp2[i]){
			spmax = sp2[i];
		}
	}
	for(int i = 0 ; i < n; i++){
		if(sp2[i] < spmin){
			spmin = sp2[i];
		}
	}
	cout << "So phuc lon nhat: " ;
	spmax.in();
	cout << "So phuc nho nhat: " ;
	spmin.in();
}
