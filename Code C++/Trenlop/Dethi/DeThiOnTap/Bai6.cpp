#include <bits/stdc++.h>
using namespace std;
class Nguoi{
	protected:
		string hoten, namsinh;
	public:
		Nguoi(){
		}
		void nhap(){
			cout << "Nhap ho ten: ";
			getline(cin,hoten);
			cout << "Nhap nam sinh: ";
			getline(cin, namsinh);
		}
		void in(){
			cout << "Ho ten: " << hoten << endl;
			cout << "Nam sinh: " << namsinh << endl;
		}
		string getHoten(){
			return hoten;
		}
};
class SinhVien : public Nguoi{
	protected:
		string masv;
		float diemtb;
	public:
		SinhVien(){
		}
		void nhap(){
			Nguoi::nhap();
			cout << "Nhap ma sinh vien: " ;
			getline(cin, masv);
			cout << "Nhap diem trung binh: ";
			cin >> diemtb;
			cin.ignore();
		}
		void in(){
			Nguoi::in();
			cout << "Ma sinh vien: " << masv << endl;
			cout << "Diem trung binh: " << diemtb << endl;
		}
		float getDiemtb(){
			return diemtb;
		}
		string getMasv(){
			return masv;
		}
};
int main(){
	SinhVien sv[50];
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	for(int i = 0 ;i < n; i++){
		sv[i].nhap();
	}
	cout << "Danh sach sinh vien vua nhap: ";
	for(int i = 0 ;i < n; i++){
		sv[i].in();
	}
	string tk;
	cout << "Nhap thong tin can tim kiem (ma sv hoac ho ten): ";
	getline(cin, tk);
	int count = 0;
	for(int i = 0; i< n;i++){
		if(sv[i].getMasv() == tk || sv[i].getHoten() == tk){
			cout << "Da tim thay: " << endl;
			sv[i].in();
			count++;
		}
	}
	if(count == 0){
		cout << "Khong tim thay thong tin can tim kiem!" << endl;
	}
	
}
