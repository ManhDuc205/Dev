#include <bits/stdc++.h>
using namespace std;
class PS1{
	protected:
		int tuso, mauso;
	public:
		PS1(){
			tuso = 0;
			mauso = 1;
		}
		PS1(int tuso, int mauso){
			this->tuso = tuso;
			this->mauso = mauso;
		}
		void nhap(){
			cout << "Nhap tu so: ";
			cin >> tuso;
			cout << "Nhap mau so: ";
			while(true){
				cin >> mauso;
				if(mauso != 0){
					break;
				}
				else cout << "Nhap mau so (khac 0): ";
			}
			
		}
		void in(){
			cout << tuso  <<"/" << mauso << endl;
		}
		int gcd(int tuso, int mauso){
			int du = 0;
			while(mauso != 0){
				du = tuso % mauso;
				tuso = mauso;
				mauso = du;
			}
			return tuso;
		}
		PS1 rutgon(){
			int ucln = gcd(tuso, mauso);
			return PS1(tuso / ucln , mauso / ucln);
		}
};
class PS2 : public PS1{
	public:
		PS2() : PS1(){
		}
		PS2(int tuso, int mauso) : PS1(tuso,mauso){
		}
		
		PS2 &operator = (const PS2 &ps2){
			if(this != &ps2){
				this->tuso = ps2.tuso;
				this->mauso = ps2.mauso;
			}
			return *this;
		}
		bool operator < (const PS2 &ps2){
			return this->tuso * ps2.mauso < this->mauso * ps2.tuso;
		}
		
};
int main(){
	int n;
	cout << "Nhap so luong phan so: ";
	cin >> n;
	PS2 ps2[50];
	for(int i = 0; i < n; i++){
		ps2[i].nhap();
	}
	cout << "Phan so da nhap: " << endl;
	for(int i = 0; i < n; i++){
		ps2[i].in();
	}
	PS2 psmax;
	PS2 psmin = ps2[0];
	for(int i = 0; i < n ; i++){
		if(psmax < ps2[i]){
			psmax = ps2[i];
		}
	}
	for(int i = 0; i < n ; i++){
		if(ps2[i] < psmin){
			psmin = ps2[i];
		}
	}
	cout << "Phan so co gia tri lon nhat: ";
	psmax.in();
	cout << "Phan so co gia tri nho nhat: ";
	psmin.in();
}
