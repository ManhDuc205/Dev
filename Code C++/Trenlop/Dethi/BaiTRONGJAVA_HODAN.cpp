#include <bits/stdc++.h>
using namespace std;
class Nguoi {
	private:
	    string hoten, nghenghiep;
	    int tuoi, namsinh;
	
	public:
	    void nhap() {
	        cout << "Nhap ho va ten: ";
	        cin.ignore();
	        getline(cin, hoten);
	        cout << "Nhap tuoi: ";
	        cin >> tuoi;
	        cout << "Nhap nam sinh: ";
	        cin >> namsinh;
	        cin.ignore();
	        cout << "Nhap nghe nghiep: ";
	        getline(cin, nghenghiep);
	    }
	
	    void in(){
	        cout << "Ho va ten: " << hoten << endl;
	        cout << "Tuoi: " << tuoi << endl;
	        cout << "Nam sinh: " << namsinh << endl;
	        cout << "Nghe nghiep: " << nghenghiep << endl;
	    }
};
class KhuPho{
	private:
		int sotv;
		string sonha;
		vector<Nguoi> danhsachnguoi;
	public:
		void nhapThongTinHoDan() {
	        cout << "Nhap vao so thanh vien trong ho: ";
	        cin >> sotv;
	        cin.ignore();
	        cout << "Nhap vao so nha: ";
	        getline(cin, sonha);
	        for(int i = 0; i< sotv; i++){
	        	Nguoi ng;
	        	ng.nhap();
	        	danhsachnguoi.push_back(ng);
			}
	    }
	    void inThongtinHoDan(){
	    	cout << "So nha: " << sonha << endl;
	    	cout << "So thanh vien: " << sotv << endl;
	    	for(int i = 0; i< sotv; i++){
	        	danhsachnguoi[i].in();
	        	
			}
		}
	    
};
int main(){
	int n;
    cout << "Nhap so ho dan trong khu pho: ";
    cin >> n;
    KhuPho a[n];
    for(int i =0 ; i < n ; i++){
    	a[i].nhapThongTinHoDan();
	}
	for(int i =0 ; i < n ; i++){
    	a[i].inThongtinHoDan();
	}
	
}
