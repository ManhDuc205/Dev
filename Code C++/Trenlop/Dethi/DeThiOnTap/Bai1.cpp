#include <bits/stdc++.h>
using namespace std;
class ThiSinh{
	private:
		string mats,  hoten;
		float diemtoan, diemly, diemhoa;
	public:
		ThiSinh(){
		}
		ThiSinh(string mats, string hoten, float diemtoan, float diemly, float diemhoa){
        this->mats = mats;
        this->hoten = hoten;
        this->diemtoan = diemtoan;
        this->diemly = diemly;
        this->diemhoa =diemhoa;
	    }
	
	    void nhap() {
	        cout << "Nhap ma thi sinh: ";
	        getline(cin, mats);
	        cout << "Nhap ho ten thi sinh: ";
	        getline(cin, hoten);
	        cout << "Nhap diem Toan: ";
	        cin >> diemtoan;
	        cin.ignore();
	        cout << "Nhap diem Ly: ";
	        cin >> diemly;
	        cin.ignore();
	        cout << "Nhap diem Hoa: ";
	        cin >> diemhoa;
	        cin.ignore();
	    }
	    void in(){
	        cout << "Ma thi sinh: " << mats << endl;
	        cout << "Ho va ten: " << hoten << endl;
	        cout << "Diem toan: " << diemtoan << endl;
	        cout << "Diem ly: " << diemly << endl;
	        cout << "Diem hoa: " << diemhoa << endl;
	        cout << "Tong diem: " << tongdiem() << endl;
	    }
	    float tongdiem(){
	    	return (diemtoan + diemly + diemhoa )/3;
		}
		string getHoten(){
			return hoten;
		}
		static bool sosanhhoten(ThiSinh a, ThiSinh b){
			return a.hoten < b.hoten;
		}
		
};
int main(){
	int n;
	cout << "Nhap vao so luong Thi sinh: ";
	cin >> n;
	cin.ignore();
	ThiSinh *ts = new ThiSinh[n];
	for(int i = 0; i < n; i++){
		ts[i].nhap();
	}
	ThiSinh *max = &ts[0];
	for(int i = 0; i < n ; i++){
		if(max->tongdiem() < ts[i].tongdiem()){
			max = &ts[i];
		}
	}
	cout << "Thong tin thi sinh co tong diem cao nhat: " << endl;
	max->in();
	sort(ts, ts+n, ThiSinh::sosanhhoten);
	cout << "Danh sach thi sinh sau khi sap xep: " << endl;
	for(int i = 0; i < n; i++){
		ts[i].in();
	}
	string tencantim;
	cout << "Nhap ho ten sinh vien can tim: ";
	getline(cin, tencantim);
	for(int i = 0; i < n; i++){
		if(ts[i].getHoten() == tencantim){
			cout << "Da tim thay sinh vien co ten " << tencantim << endl;
			ts[i].in();
		}
		
	}
}
