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
			cout << "Nhap mau so (khac 0): ";
			while(true){
				cin >> mauso;
				if(mauso != 0){
					break;
				}
				else cout << "Nhap mau so (khac 0):";
			}
		}
		void in(){
			cout << tuso << "/" << mauso <<endl;
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
			return PS1(tuso / gcd(tuso,mauso), mauso / gcd(tuso,mauso));
		}
};
class PS2 : public PS1{
	public:
		PS2() : PS1(){
		}
		PS2(int tuso, int mauso) : PS1 (tuso,mauso){
		}
		PS2 &operator = (const PS2 &ps2){
			if(this != &ps2){
				this->tuso = ps2.tuso;
				this->mauso = ps2.mauso;
			}
			return *this;
		}
		bool operator > (const PS2 &ps2){
			if(this->tuso * ps2.mauso > ps2.tuso * this->mauso){
				return true;
			}
			return false;
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
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(ps2[j] > ps2[i]){
				swap(ps2[i],ps2[j]);
			}
		}
	}
	cout << "Danh sach phan so sau khi sap xep theo thu tu giam dan: " << endl;
	for(int i = 0; i < n; i++){
		ps2[i].in();
	}
}
