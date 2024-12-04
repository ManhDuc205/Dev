#include <iostream>
#include <string>

using namespace std;

class Sinhvien{
private:    
    double toan, ly, hoa;
    string makv, masv, hoten;
public:
    void nhap();
    void in();
};

void Sinhvien::nhap(){
    cin >> makv;
    cin.ignore();
    getline(cin, this->hoten);   
    cin >> this->toan >> this->ly >> this->hoa;
}
void Sinhvien::in(){
    cout << this->makv << " " << this->hoten << ' ';
    int khuvuc = makv[2] - '0';
    double tongdiem = this->toan + this->ly + this->hoa;
    if( khuvuc == 1){
        tongdiem += 0.5;
    }
    else if(khuvuc == 2){
        tongdiem += 1.0;
    }
    else if(khuvuc == 3){
        tongdiem += 2.5;
    }
    cout << tongdiem << " ";
    if(tongdiem >=24){
        cout << "TRUNG TUYEN\n";
    }
    else cout << "TRUOT :(\n";
}

int main(){
    Sinhvien x;
    x.nhap();
    x.in();
    
}
