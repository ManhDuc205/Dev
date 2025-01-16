#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
using namespace std;
class khachang{
	private: 
	string tenchunha,sonha,masocongto;
	float somoi,socu;
	float tienphaitra;
	public :
		 void nhap(){
		 	cin.ignore();
		 	cout<<"nhap ten " ;
		 	getline(cin,tenchunha);
		 	cout<<"nhap so nha ";
		 	getline(cin,sonha);
		 	cout<<"nhap ma so cong to";
		 	cin>>masocongto;
		 }
		 void xuat(){
		 	cout<<"ten: " << tenchunha << endl;
		 	cout<<"so nha: " << sonha << endl;
		 	cout<<"ma so cong to" << masocongto << endl;
		 }
	
		 
	
	
};
class bienlai{
	private:
	khachang hodan;
	float somoi,socu;
	float tienphaitra ;
	public : 
	void nhap(){
		hodan.nhap();
		cout<<"nhap so cu " ;
		cin>>socu;
		cout<<"nhap so moi " ;
		cin>>somoi;
        tenphaitratinh();
	}
    void tenphaitratinh(){
        tienphaitra = (somoi - socu)*750;
    }
	void xuat(){
		hodan.xuat();
		cout<<" so cu: " << socu << endl;
        cout << "so moi: " << somoi << endl;
        cout << "Tien Phai tra: "  << fixed << setprecision(2) << tienphaitra << endl;
	}
	
};
int main(){
    vector<bienlai> listbienlai ; 
    int n ;
    cout<<" nhap so ho dan "; 
    cin>>n;
    for(int i=0;i<n;i++){
    	bienlai b;
    	b.nhap();
    	listbienlai.push_back(b);
        
        
	}
	for(int i=0;i<n;i++){
		cout<<" ho dan thu " << i+1 << endl;
		listbienlai[i].xuat() ;
        
		cout<<"-----------" << endl;
	}
}