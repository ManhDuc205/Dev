#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	protected:
		string hoten, chucvu, gioitinh, namsinh, quequan;
		int namvaolam;
	public:
		NhanVien(){
		}
		friend istream &operator >> (istream &is, NhanVien &nv){
			cout << "Nhap ho ten: " ;
			getline(cin, nv.hoten);
			cout << "Nhap chuc vu: ";
			getline(cin, nv.chucvu);
			cout << "Nhap gioi tinh: ";
			getline(cin, nv.gioitinh);
			cout << "Nhap nam sinh: ";
			getline(cin, nv.namsinh);
			cout << "Nhap que quan: ";
			getline(cin, nv.quequan);
			cout << "Nhap nam vao lam: ";
			is >> nv.namvaolam;
			cin.ignore();
			return is;
		}
		friend ostream &operator << (ostream &os, NhanVien &nv){
			os << "Ho ten: " << nv.hoten << endl;
			os << "Chuc vu: " << nv.chucvu << endl;
			os << "Gioi tinh: " << nv.gioitinh << endl;
			os << "Nam sinh: " << nv.namsinh << endl;
			os << "Que quan: " << nv.quequan << endl;
			os << "Nam vao lam: " << nv.namvaolam << endl;
			os << "So nam lam viec: " << nv.namlam() << endl;
			return os;
		}
		int namlam(){
			return 2025 - namvaolam;
		}
};
int main(){
	NhanVien nv[50];
	int n;
	cout << "Nhap so luong nhan vien: " ;
	cin >> n;
	cin.ignore();
	for(int i = 0 ;i < n; i++){
		cout << "Nhap thong tin cho nhan vien thu: " << i + 1 << ": " << endl;
		cin >> nv[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		if(nv[i].namlam() > 20){
			cout << nv[i];
			count++;
		}
	}
	if(count == 0){
		cout << "Khong co nhan vien nao tren 20 nam lam viec";
	}
}
