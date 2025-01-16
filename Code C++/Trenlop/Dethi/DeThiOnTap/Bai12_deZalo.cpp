#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string hoten, namsinh;
		float diem1, diem2, diem3,diem4, diem5;
	public:
		SinhVien(){
		}
		void nhap(){
			cout << "Nhap ho ten: " ;
			getline(cin,hoten);
			cout << "Nhap nam sinh: ";
			getline(cin,namsinh);
			cout << "Nhap diem 1: ";
			cin >> diem1;
			cout << "Nhap diem 2: ";
			cin >> diem2;
			cout << "Nhap diem 3: ";
			cin >> diem3;
			cout << "Nhap diem 4: ";
			cin >> diem4;
			cout << "Nhap diem 5: ";
			cin >> diem5;
			cin.ignore();
		}
		float diemtb(){
			return (diem1 + diem2+ diem3 + diem4+ diem5)/5;
		}
		void in(){
			cout << "Ho ten: " << hoten <<endl;
			cout << "Nam sinh: " << namsinh << endl;
			cout << "Diem 1: " << diem1 <<endl;
			cout << "Diem 2: " << diem2 <<endl;
			cout << "Diem 3: " << diem3 << endl;
			cout << "Diem 4: " << diem4 <<endl;
			cout << "Diem 5: " << diem5 <<endl;
			cout << "Diem tb: " << diemtb() << endl;
		}
		string quydoi(float diem){
			if(diem >= 8.5){
				return "A";
			}
			else if(diem >= 8 && diem < 8.5){
				return "B+";
			}
			else if(diem >= 7 && diem < 8 ){
				return "B";
			}
			else if(diem >= 6 && diem <7){
				return "C+";
			}
			else if(diem >= 5.5 && diem < 6){
				return "C";
			}
			else if(diem >= 5.0 && diem < 5.5){
				return "D+";
			}
			else if(diem >= 4 && diem<5){
				return "D";
			}
			else if(diem <4){
				return "F";
			}
		}
		
		float getDiem1(){
			return diem1;
		}
		float getDiem2(){
			return diem2;
		}
		float getDiem3(){
			return diem3;
		}
		float getDiem4(){
			return diem4;
		}
		float getDiem5(){
			return diem5;
		}
		string getHoten(){
			return hoten;
		}
		string getNamsinh(){
			return namsinh;
		}
};
int main(){
	SinhVien sv[50];
	int n;
	cout << "Nhap vao so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n ; i++){
		sv[i].nhap();
	}
	cout << "Danh sach sinh vien thi lai: " <<endl;
	for(int i = 0; i< n; i++){
		if(sv[i].getDiem1() < 5 || sv[i].getDiem2() < 5 || sv[i].getDiem3() < 5||sv[i].getDiem4() < 5||sv[i].getDiem5() < 5 ){
			cout << endl;
			sv[i].in();
		}
		if(sv[i].getDiem1() < 5){
			cout << "Mon thi lai: Mon 1" <<endl;
			cout << "Diem thi: " << sv[i].getDiem1() <<endl;
		}
		if(sv[i].getDiem2() < 5){
			cout << "Mon thi lai: Mon 2" <<endl;
			cout << "Diem thi: " << sv[i].getDiem2() <<endl;
		}
		if(sv[i].getDiem3() < 5){
			cout << "Mon thi lai: Mon 3" <<endl;
			cout << "Diem thi: " << sv[i].getDiem3() <<endl;
		}
		if(sv[i].getDiem4() < 5){
			cout << "Mon thi lai: Mon 4" <<endl;
			cout << "Diem thi: " << sv[i].getDiem4() <<endl;
		}
		if(sv[i].getDiem5() < 5){
			cout << "Mon thi lai: Mon 5" <<endl;
			cout << "Diem thi: " << sv[i].getDiem5() <<endl;
		}
	}
	cout << "Danh sach sinh vien phai thi tot nghiep: " << endl;
	for(int i = 0; i < n; i++){
		if(sv[i].diemtb() < 7 && sv[i].getDiem1() >= 5 && sv[i].getDiem2() >= 5 && sv[i].getDiem3() >= 5 && sv[i].getDiem4() >= 5 && sv[i].getDiem5() >= 5){
			sv[i].in();
		}
	}
	cout << "Danh sach sinh vien duoc lam do an: " << endl;
	for(int i = 0; i < n; i++){
		if(sv[i].diemtb() >= 7 && sv[i].getDiem1() >= 5 && sv[i].getDiem2() >= 5 && sv[i].getDiem3() >= 5 && sv[i].getDiem4() >= 5 && sv[i].getDiem5() >= 5){
			sv[i].in();
		}
	}
	cout << "Thong tin sinh vien khi quy doi diem: " << endl;
	for(int i = 0; i < n ; i++){
		cout << "Ho ten: " << sv[i].getHoten() << endl;
		cout << "Nam sinh: " << sv[i].getNamsinh() <<endl;
		cout << "Diem 1 quy doi: " << sv[i].quydoi(sv[i].getDiem1()) <<endl;
		cout << "Diem 2 quy doi: " << sv[i].quydoi(sv[i].getDiem2()) <<endl;
		cout << "Diem 3 quy doi: " << sv[i].quydoi(sv[i].getDiem3()) <<endl;
		cout << "Diem 4 quy doi: " << sv[i].quydoi(sv[i].getDiem4()) <<endl;
		cout << "Diem 5 quy doi: " << sv[i].quydoi(sv[i].getDiem5()) <<endl;
	}
}
