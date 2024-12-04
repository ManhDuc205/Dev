#include <iostream>
#include <string>
using namespace std;

class Nguoi{
    protected: 
        string maso, hoten;
        int luong;
    public:
        Nguoi (){}

        void nhap(){
            cout << "Nhap ma so: ";
            cin.ignore();
            getline(cin, maso);
            cout << "Nhap ho ten: ";
            getline(cin,hoten);
        }
        void in(){
            cout << "Ma so: " << maso << endl;
            cout << "Ho va ten: " << hoten << endl;
        }
        string getMaso(){
            return maso;
        }
        
};

class Bienche : public Nguoi{
    protected:
        float hesoluong, tienphucap;
    public:
        Bienche(){}
        void nhap(){
            Nguoi::nhap();
            cout << "Nhap he so luong: ";
            cin >> hesoluong;
            cout << "Nhap tien phu cap: ";
            cin >> tienphucap;
        }

        void in(){
            Nguoi::in();
            cout << " He so luong: " << hesoluong << endl;
            cout << "Tien phu cap: " << tienphucap << endl;
        }
        float getHesoluong(){
            return hesoluong;
        }
        

};

class HopDong: public Nguoi{
    protected:
        float tienconglaodong, songaylv, hesovuotgio;
    public:

        HopDong(){}
        void nhap(){
            Nguoi::nhap();
            cout << "Nhap tien cong lao dong: ";
            cin >> tienconglaodong;
            cout << " Nhap so ngay lam viec: ";
            cin >> songaylv;
            cout << "Nhap he so vuot gio: ";
            cin >> hesovuotgio;
        }
        void in(){
            Nguoi::in();
            cout << "Tien cong lao dong: " << tienconglaodong<< endl;
            cout << "So ngay lam viec: " << songaylv << endl;
            cout << "He so vuot gio: " << hesovuotgio << endl;
        }
        string getMasohd(){
            string mshd = Nguoi::getMaso();
            return mshd;
        }

};

int main(){
    Bienche b[50];
    int nb; cout <<"Nhap vao so luong nguoi bien che: ";
    cin >> nb;
    for(int i = 0 ; i < nb; i++){
        b[i].nhap();
    }
    
    HopDong h[50];
    int nh; cout << "Nhap vao so luong nguoi hop dong: "; 
    cin >> nh;
    for(int i = 0; i < nh; i++ ){
        h[i].nhap();
    }
    

    
    cout << "Thong tin nguoi thuoc bien che:\n ";
    for(int i = 0 ; i < nh; i++){
        h[i].in();
    }
    cout << "Thong tin nguoi lam hop dong:\n ";
    for(int i = 0 ; i < nb; i++){
        b[i].in();
    }
    int max = b[0].getHesoluong();
    Bienche m;
    int temp = 0;
    for(int i = 1 ; i < nb; i++){
        if(max < b[i].getHesoluong()){
            max = b[i].getHesoluong();
            temp = i;
        }
    }
    cout << "Thong tin nguoi co he so luong cao nhat:\n";
    b[temp].in();
    

    for(int i = 0; i < nh; i++){
        if(h[i].getMasohd() == "HD01"){
            cout << "Nguoi co ma so HD01 la: \n";
            h[i].in();
        }
    }
}