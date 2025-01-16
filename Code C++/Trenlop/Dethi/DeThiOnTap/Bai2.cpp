#include <bits/stdc++.h>
using namespace std;
class DaThuc{
	private:
		int a[100] = {0};
		int bacdt;
	public:
		DaThuc(){			
		}
		void nhap(){
			cout << "Nhap bac cua da thuc: ";
			cin >> bacdt;
			cout << "Nhap he so cua da thuc: ";
			for(int i = 0; i <= bacdt; i++){
				cin >> a[i];
			}
		}
		void in(){
			if(bacdt >= 0){
				if (bacdt == 0) {
		            cout << a[0];
		            return;
		        }
				cout << a[bacdt] << "x^" << bacdt;
				for(int i = bacdt - 1; i > 0; i--){
					if(a[i] > 0){
						cout << "+" << a[i] << "x^" << i;
					}
					if(a[i] < 0){
						cout << "-" << -a[i] << "x^" << i;
					}
				}
				if(a[0] >= 0){
					cout << "+" << a[0];
				}
				else{
					cout << "-" << -a[0];
				}
			}
			else cout << "0";
		}
		DaThuc operator + (const DaThuc &dt1){
			DaThuc sum;
			sum.bacdt = max(bacdt, dt1.bacdt);
			for(int i = 0; i <= sum.bacdt; i++){
				sum.a[i] = a[i] + dt1.a[i];
			}
			return sum;
		}
		DaThuc operator - (const DaThuc &dt1){
			DaThuc sub;
			sub.bacdt = max(bacdt, dt1.bacdt);
			for(int i = 0; i <= sub.bacdt; i++){
				sub.a[i] = a[i] - dt1.a[i];
			}
			return sub;
		}
};
int main(){
	DaThuc dt1, dt2;
	dt1.nhap();
	dt2.nhap();
	cout << "Da thuc thu nhat: ";
	dt1.in();
	cout <<"\n Da thuc thu hai: ";
	dt2.in();
	DaThuc sum = dt1 + dt2;
	cout << "\nTong hai da thuc la: " << endl;
	sum.in();
	cout << endl;
	DaThuc sub = dt1 - dt2;
	cout << "Hieu hai da thuc la: " << endl;
	sub.in(); 
}
