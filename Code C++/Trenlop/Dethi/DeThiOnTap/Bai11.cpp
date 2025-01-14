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
class CongNhan : public NhanSu{
	private:
		int ngaycong;
	public:
		CongNhan(){
		}
		void nhap(){
			NhanSu::nhap();
			cout << "Nhap so ngay cong: ";
			cin >> ngaycong;
			cin.ignore();
		}
		void in(){
			NhanSu::in();
			cout << "ngay cong: " << ngaycong << endl;
		}
		int getNgaycong(){
			return ngaycong;
		}
};
int main(){
	CongNhan cn[50];
	int n;
	cout << "Nhap vao so luong can bo: ";
	cin >> n;
	cin.ignore();
	for(int i = 0; i< n; i++){
		cout << "Nhap thong tin cho cong nhan thu: " << i + 1 << ": " << endl;
		cn[i].nhap();
	}
	int tienthuong[50];
	for(int i = 0; i< n; i++){
		if(cn[i].getNgaycong() > 26 ){
			cn[i].in();
			cout << "Tien thuong: " <<(cn[i].getNgaycong() - 26) *100000 << endl;
		}
	}
	
	
}

