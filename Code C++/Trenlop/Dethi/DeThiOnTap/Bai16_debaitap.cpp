#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string hoten, masv;
		float diemtoan, diemly,diemhoa,diemtb;
	public:
		SinhVien(){
			
			
		}
		void nhap(){
			cout << "Nhap ho ten: ";
			getline(cin, hoten);
			cout << "Nhap ma sv: ";
			getline(cin, masv);
			cout<< "Nhap diem toan: ";
			cin>>diemtoan;
			cout << "Nhap diem ly: ";
			cin >> diemly;
			cout << "Nhap diem hoa: ";
			cin >> diemhoa;
			cin.ignore();
			diemtb = (diemtoan + diemly + diemhoa)/3;
		}
		void in(){
			cout << "Ho ten: " << hoten <<endl;
			cout << "Ma sv: " << masv << endl;
			cout << "Diem toan: " << diemtoan <<endl;
			cout << "Diem hoa: " << diemhoa <<endl;
			cout << "Diem ly: " << diemly <<endl;
			cout << "Diem tb: " << diemtb <<endl;
		}
		float getDiemtb(){
			return diemtb;
		}
		int monthilai(){
			if(diemtoan > 5 && diemly > 5 && diemhoa>5){
				return 0;
			}
			if(diemtoan < 5){
				cout << "Mon thi lai: Toan" <<endl;
				cout << "Diem thi lai: " << diemtoan << endl;
			}
			if(diemly < 5){
				cout << "Mon thi lai: Ly" <<endl;
				cout << "Diem thi lai: " << diemly << endl;
			}
			if(diemhoa < 5){
				cout << "Mon thi lai: Hoa" <<endl;
				cout << "Diem thi lai: " << diemhoa << endl;
			}
			return 1;
		}
};
int main(){
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	SinhVien sv[50];
	for(int i = 0; i< n; i++){
		sv[i].nhap();
	}
	for(int i = 0; i< n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(sv[i].getDiemtb() < sv[j].getDiemtb()){
				swap(sv[i], sv[j]);
			}
		}
	}
	cout << "Danh sach sinh vien sap xep theo giam dan cua diem tb: " <<endl;
	for(int i = 0; i< n; i++){
		sv[i].in();
	}
	SinhVien svmax;
	for(int i = 0; i< n; i++){
		if(svmax.getDiemtb() < sv[i].getDiemtb()){
			svmax = sv[i];
		}
	}
	cout << "Sinh vien co tong diem cao nhat: " <<endl ;
	svmax.in();
	cout <<endl;
	for(int i = 0; i < n; i++){
		if(sv[i].monthilai() != 0){
			sv[i].in();
			sv[i].monthilai();
		}
	}
}
