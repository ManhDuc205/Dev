#include <bits/stdc++.h>
using namespace std;
class CanBo{
	private:
		string macb, madonvi, hoten;
		int namsinh;
	public:
		CanBo(){
		}
		void nhap(){
			cout << "Nhap ma can bo: ";
			getline(cin, macb);
			cout << "Nhap ma don vi: ";
			getline(cin,madonvi);
			cout << "Nhap ho ten: ";
			getline(cin,hoten);
			cout << "Nhap nam sinh: ";
			cin >> namsinh;
			cin.ignore();
		}
		void in(){
			cout << "Ma can bo: " << macb << endl;
			cout << "Ma don vi: " << madonvi << endl;
			cout << "Ho ten: " << hoten << endl;
			cout << "Nam sinh: " << namsinh << endl;
		}
};
class Luong : public CanBo{
	private:
		double phucap, hesoluong, baohiem;
	public:
		Luong(){
		}
		void nhap(){
			CanBo::nhap();
			cout << "Nhap phu cap: ";
			cin >> phucap;
			cin.ignore();
			cout << "Nhap he so luong: ";
			cin >> hesoluong;
			cin.ignore();
			cout << "Nhap bao hiem" ;
			cin >> baohiem;
			cin.ignore();
		}
		void in(){
			CanBo::in();
			cout << "Phu cap: " << phucap << endl;
			cout << "He so luong: " << hesoluong << endl;
			cout << "Bao hiem: " << baohiem << endl;
			cout << "Luong: " << fixed << setprecision(2) << luong() << endl;
		}
		double luong(){
			return hesoluong * 290000 + phucap - baohiem;
		}
};
int main(){
	int n;
	cout << "Nhap so luong can bo: ";
	cin >> n;
	cin.ignore();
	Luong luong[50];
	for (int i = 0; i < n; i++){
		cout << "Nhap thong tin can bo thu " << i + 1 << ": " << endl;
		luong[i].nhap();
	}
	for (int i = 0; i < n; i++){
		cout << "Thong tin can bo thu: " << i + 1 << ": " << endl;
		luong[i].in();
	}
}
