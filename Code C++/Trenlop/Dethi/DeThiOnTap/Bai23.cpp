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
			cout << "Nhap tu so: " ;
			cin >> tuso;
			cout << "Nhap mau so:";
			while(true){
				cin >> mauso;
				if(mauso != 0){
					break;
				}
				else cout << "Nhap lai mau so (khac 0): " ;
			}
		}
		void in(){
			cout << tuso << "/" << mauso << endl;
		}
		int gcd (int tuso, int mauso){
			int du = 0;
			while(mauso != 0){
				du = tuso % mauso;
				tuso = mauso;
				mauso = du;
			}
			return tuso;
		}
		PS1 rutgon(){
			int ucln = gcd (tuso, mauso);
			return PS1(tuso / ucln , mauso / ucln);
		}
};
class PS2 : public PS1{
	public:
		PS2() : PS1(){
		}
		PS2(int tuso, int mauso) : PS1(tuso, mauso){
		}
		PS2 &operator = (const PS2 &ps2){
			if(this != &ps2){
				this->tuso = ps2.tuso;
				this->mauso = ps2.mauso;
			}
			return *this;
		}
		bool operator < (PS2 ps2){
			return this->tuso * ps2.mauso < this->mauso * ps2.tuso;
		}
		PS2 operator + (PS2 ps2){
			PS2 sum;
			sum.tuso = this->tuso * ps2.mauso + this->mauso * ps2.tuso;
			sum.mauso = this->mauso * ps2.mauso;
			return sum;
		}
};
int main(){
	int n;
	cout << "Nhap vao so luong phan so (toi da 10): ";
	while(true){
		cin >>n;
		if(n <= 10){
			break;
		}
		else cout << "Nhap lai so luong phan so (toi da 10):";
	}
	PS2 ps2[10];
	for(int i = 0; i< n; i++){
		cout << "Nhap phan so thu " << i+ 1 << ": " << endl;
		ps2[i].nhap();
	}
	PS2 psmax;

	for(int i = 0; i< n; i++){
		if(psmax < ps2[i]){
			psmax = ps2[i];
		}
	}
	cout << "Phan so co gia tri lon nhat: ";
	psmax.in();
	PS2 sum;
	PS2 ss(1,2);	
	for(int i = 0; i < n; i++){
		if(ps2[i] < ss){
			sum = sum + ps2[i];
		}
	}
	cout << "Tong cac phan so co trong danh sach co gia tri nho hon 1/2: ";
	sum.rutgon().in();
	
}
