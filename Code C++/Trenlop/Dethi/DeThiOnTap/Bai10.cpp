#include <bits/stdc++.h>
using namespace std;
class NhanSu{
	private:
		string manv, hoten, namsinh;
	public:
		NhanSu(){
		}
		void nhap(){
			cout << "Nhap ma nv: ";
			getline(cin, manv);
			cout << "Nhap ho ten: ";
			getline(cin, hoten);
			cout << "Nhap nam sinh: ";
			getline(cin, namsinh);
		}
		void in(){
			cout << "Ma nv: " << manv << endl;
			cout << "Ho ten: " << hoten << endl;
			cout << "Nam sinh: " << namsinh << endl;
		}
};
class CanBo : public NhanSu{
	private:
		float luongcoban, hesoluong;
	public:
		CanBo(){
		}
		void nhap(){
			NhanSu::nhap();
			cout << "Nhap luong co ban: ";
			cin >> luongcoban;
			cin.ignore();
			cout << "Nhap he so luong: ";
			cin >> hesoluong;
			cin.ignore();
		}
		void in(){
			NhanSu::in();
			cout << "Luong co ban: " << luongcoban << endl;
			cout << "He so luong: " << hesoluong << endl;
			cout << "Luong: " << luong() << endl;
		}
		float luong(){
			return luongcoban * hesoluong;
		}

};
int main(){
	CanBo cb[50];
	int n;
	cout << "Nhap vao so luong can bo: ";
	cin >> n;
	cin.ignore();
	for(int i = 0; i< n; i++){
		cout << "Nhap thong tin cho can bo thu: " << i + 1 << ": " << endl;
		cb[i].nhap();
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(cb[i].luong() < cb[j].luong()){
				swap(cb[i], cb[j]);
			}
		}
	}
	cout << "Danh sach luong can bo theo thu tu giam dan cua luong: " << endl;
	for(int i = 0; i< n; i++){
		cb[i].in();
	}
	
}
