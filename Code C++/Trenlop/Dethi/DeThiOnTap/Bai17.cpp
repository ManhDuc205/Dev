#include <bits/stdc++.h>
using namespace std;
class Diem{
	private:
		double x ,y;
	public:
		Diem(){
			x =0;y = 0;
		}
		void nhap(){
			cout << "Nhap x: ";
			cin >> x;
			cout << "Nhap y: ";
			cin >> y;
		}
		void in(){
			cout << "(" << x << ", " << y <<")";
			
		}
		friend double khoangcach(Diem d1, Diem d2) {
        	return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
    	}
};
class TamGiac{
	private:
		Diem d1 , d2, d3;
		double canh1,canh2,canh3;
	public:
		void nhap(){
			cout << "Nhap toa do diem 1:\n ";
	        d1.nhap();
	        cout << "Nhap toa do diem 2: ";
	        d2.nhap();
	        cout << "Nhap toa do diem 3: ";
	        d3.nhap();
	        canh1 = khoangcach(d1, d2);
	        canh2 = khoangcach(d2, d3);
	        canh3 = khoangcach(d3, d1);
		}
		void in(){
			cout << "Canh 1: " << canh1 << endl;
			cout << "Canh 2: " << canh2 << endl;
			cout << "Canh 3: " << canh3 << endl;
			cout << "Diem 1: ";
			d1.in();
			cout << endl;
			cout << "Diem 2: ";
			d2.in();
			cout << endl;
			cout << "Diem 3: ";
			d3.in();
			cout << endl;
		}
		void kiemtratamgiac(){
			if(canh1 + canh2 > canh3 && canh2 + canh3 > canh1 && canh1 + canh3 > canh2){
				if(canh1 == canh2 && canh2 == canh3){
					cout << "La tam giac deu!";
				}
				if(canh1 == canh2 || canh2 == canh3 || canh1 == canh3 ){
					cout << "La tam giac can!";
				}
				if(canh1 * canh1 + canh2 * canh2 == canh3 * canh3 || canh1 * canh1 + canh3 * canh3 == canh2 * canh2 || canh3 * canh3 + canh2 * canh2 == canh1 * canh1 ){
					cout << "La tam giac vuong!";
				}
				else cout << "La tam giac thuong!";
			}
		}
};
int main(){
	TamGiac tg;
	tg.nhap();
	tg.kiemtratamgiac();
}
