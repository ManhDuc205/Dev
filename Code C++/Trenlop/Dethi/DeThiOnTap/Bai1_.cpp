#include <bits/stdc++.h>
#include <string>
class ThiSinh{
	protected:
		string mats, hoten;
		float diemtoan, diemly,diemhoa;
	public:
		ThiSinh(){
		}
		ThiSinh(string mats, string hoten, float diemtoan, float diemly, float diemhoa){
			this.mats = mats;
			this.hoten = hoten;
			this.diemtoan = diemtoan;
			this.diemhoa = diemhoa;
			this.diemly = diemly;
		}
		void nhap(){
			cout << "Nhap ma thi sinh: ";
			getline(cin, mats);
			cout << "Nhap ho ten: ";
			getline(cin,hoten);
			cout << "Nhap diem toan: ";
			cin >> diemtoan;
			cin.ignore();
			cout << "Nhap diem ly: ";
			cin >> diemly;
			cin.ignore();
			cout << "Nhap diem hoa : ";
			cin >> diemhoa;
			cin.ignore();
		}
		void in(){
			cout << "Ma thi sinh: " << mats << endl;
			cout << "Ho ten: " << hoten << endl;
			cout << "Diem toan: " << diemtoan << endl;
			cout << "Diem Ly: " << diemly << endl;
			cout << "Diem hoa: " << diemhoa << endl;
			cout << "Tong diem: " << tongdiem() << endl;
		}
		float tongdiem(){
			return (diemtoan + diemly + diemhoa) / 3;
		}
};
int main(){
	int n;
	cout << "Nhap vao n thi sinh: ";
	cin >> n;
	ThiSinh *ts = new ThiSinh[n];
	for(int i = 0; i < n; i++){
		cout << " Nhap vao thong tin cua thi sinh thu" << i + 1 << ":" << endl;
		ts[i].nhap();
	}
	for(int i = 0; i < n; i++){
		cout << " Thong tin cua thi sinh thu" << i + 1 << ":" << endl;
		ts[i].in(); 
	}
	int index = 0;
	float max = 0;
	for(int i = 0; i < n - 1; i++){
		if(max < ts[i].tongdiem()){
			index = i;
		}
	}
	cout << "Thong tin hoc sinh co tong diem cao nhat: " << endl;
	ts[index].in();
}
