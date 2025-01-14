#include <bits/stdc++.h>
using namespace std;
class DaThuc{
	protected:
		int bacdt;
		int a[15] = {0};
	public:
		DaThuc(){
			bacdt = 0;
			a[bacdt] = 0;
		}
		friend istream &operator >>(istream &is, DaThuc &dt){
			cout << "Nhap bac cua da thuc: ";
			is >> dt.bacdt;
			cout << "Nhap he so cua da thuc: ";
			for(int i = 0; i <= dt.bacdt; i++){
				is >> dt.a[i];
			}
			return is;
		}
		friend ostream &operator << (ostream &os, DaThuc &dt){
			if(dt.bacdt >=0){
				os << dt.a[dt.bacdt] << "x^" << dt.bacdt;
				for(int i = dt.bacdt - 1; i > 0 ; i--){
					if(dt.a[i] > 0){
						os << "+" << dt.a[i] << "x^" << i;
					}
					else if (dt.a[i] < 0){
						os << "-" << dt.a[i] << "x^" << i;
					}
				}
				if(dt.a[0] >= 0){
					os << "+" << dt.a[0] ;	
				}
				else{
					os << "-" << dt.a[0];
				}
			}
			else {
				os << "0";
			}
			return os;
		}
		DaThuc operator +(const DaThuc &dt){
			DaThuc sum;
			sum.bacdt = max(bacdt, dt.bacdt);
			for(int i = 0; i <= sum.bacdt; i++){
				sum.a[i] = a[i] + dt.a[i];
			}
			return sum;
		}
		DaThuc operator - (const DaThuc &dt){
			DaThuc minus;
			minus.bacdt = max(bacdt, dt.bacdt);
			for(int i = 0; i <= minus.bacdt; i++){
				minus.a[i] = a[i] - dt.a[i];
			}
			return minus;
		}
};
int main(){
	DaThuc dt1, dt2;
	cout << "Nhap Da thuc thu 1: ";
	cin >> dt1;
	cout << "Nhap Da thuc thu 2: ";
	cin >> dt2;
	cout << "Da thuc thu nhat: " << dt1 << endl;
	cout << "Da thuc thu hai: " << dt2 << endl;
	DaThuc sum = dt1 + dt2;
	cout << "Tong 2 da thuc: " <<sum << endl;
	DaThuc tru = dt1 - dt2;
	cout << "Hieu 2 da thuc: " <<tru << endl;
	
}
