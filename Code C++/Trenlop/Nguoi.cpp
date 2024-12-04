#include <iostream>
#include <string>
using namespace std;
class Nguoi{
    private:
        string hoten, namsinh;
    public:
        void setHoten(string hoten){
            this->hoten = hoten;
        }
        void setNamsinh(string namsinh){
            this->namsinh = namsinh;
        }
        string getHoten(){
            return hoten;
        }
        string getNamsinh(){
            return namsinh;
        }
};
class Sinhvien: public Nguoi{
    private:
        string masv;
        float dtb;
    public: 
        void nhap() {
            cin.ignore();
            string ht,ns;
            cout << "Nhap ho ten: ";
            getline(cin, ht);
            setHoten(ht);
            cout << "Nhap nam sinh: ";
            getline(cin, ns);
            setNamsinh(ns);
            cout << "Nhap ma sinh vien: ";
            getline(cin, masv);
            cout << "Nhap diem trung binh: ";
            cin >> dtb;
        }
        void in(){
            cout << "Ho ten: " << getHoten()<< endl;
            cout << "Nam Sinh: " << getNamsinh()<< endl; 
            cout << "Ma sv: " << masv<< endl;
            cout << "Diem tb: " << dtb<< endl;
        }
        float getDtb(){
            return dtb;
        }
        string getMasv(){
            return masv;
        }
        
        

};
int main(){
    int n;cout << " nhap so luong sv: "; cin >> n;
    Sinhvien a[50];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    for(int i = 0; i < n; i++){
        a[i].in();
    }
    
    
    for(int i = 0 ; i < n -1 ;i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].getDtb() < a[j].getDtb() ){
                Sinhvien temp = a[i];
                a[i] = a[j];
                a[j] = temp;              
            }
        }
    }
    cout << "\nDanh sach sinh vien sau khi sap xep theo diem trung binh giam dan:\n";
    for(int i = 0; i< n; i++){
        a[i].in();
    }    
    string t;
    cout << " nhap vao masv can tim: "; 
    cin.ignore();
    getline(cin, t);
    for(int i = 0; i < n; i++){
        a[i].in();
    }
    bool ktra = false;
    for(int i = 0; i < n; i++){
        if(a[i].getMasv() == t){
            cout << "\nThong tin sinh vien can tim:\n";
            a[i].in();
            ktra = true;
            break;
        }
    }
    if(!ktra){
        cout << " Khong tim thay" << endl;
    }
        
    
}