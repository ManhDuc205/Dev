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
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(sv[i].getDiemtb() < sv[j].getDiemtb()){
				swap(sv[i], sv[j]);
			}
		}
	}
	cout << "Danh sach sinh vien co diem tb giam dan: " << endl;
	for(int i = 0 ;i < n; i++){
		sv[i].in();
	}
}
