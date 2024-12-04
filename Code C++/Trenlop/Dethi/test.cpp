#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
class SP1{
    protected:
    int thuc,ao;
    public : 
    SP1(){
        thuc=0;
        ao=0;
    }
    void nhap(){
        cout<<"Nhap so thuc: " ;
        cin>>thuc;
        cout<<"Nhap so ao: ";
        cin>>ao;

    }
    void xuat(){
        if(ao > 0)
        cout<<thuc << "+" << ao <<"i"<<endl;
        else 
        cout<<thuc << ao <<"i"<<endl;
    }
    float module(){
        float md=sqrt(thuc*thuc+ao*ao);
        return md;
    }

  

};
class SP2: public SP1{
     public : 
     SP2 operator = ( SP2 sp2){
        thuc=sp2.thuc;
        ao=sp2.ao;
        return *this;
     };
     SP2(){
        SP1();
     }
     bool operator > (SP2 sp2){
        return module()> sp2.module();
     }
       bool operator < (SP2 sp2){
        return module() < sp2.module();
     }
     SP2 operator + (SP2 sp2){
        SP2 tong;
        tong.thuc=thuc+sp2.thuc;
        tong.ao=ao+sp2.ao;
        return tong;
     }
     
    
};
int main(){
    
    int n ;
    cout<<" nhap n " ;
    cin>>n ;
    vector<SP2> listsp;
    if(n>10) n=10;
    for(int i=0;i<n;i++){
        SP2 sp;
        sp.nhap();
        listsp.push_back(sp);
        
    }
    for(int i=0;i<listsp.size();i++){
        for(int j=i+1;j<listsp.size();j++){
            if(listsp[i] < listsp[j]){
               SP2 temp = listsp[i];
               listsp[i]=listsp[j];
               listsp[j]=temp;
            }
        }
    }
    cout<<" danh sach so phuc giam dan ";
     for( SP2 x: listsp){
        x.xuat();
     }
    // tim so phuc max, min 
    SP2 max=listsp[0] ;
    SP2 min=listsp[0];
    for(int i=0;i<listsp.size();i++){
        if(max<listsp[i]){
            max=listsp[i];
        }
        if(min>listsp[i]){
            min=listsp[i];
        }
    }
    cout<<" so phuc max la " ;
    max.xuat();
    cout<<" so phuc min la "; 
    min.xuat();
    // tinh tong cac so phuc trong day ; 
    SP2 tong;
    for(int i=0;i<listsp.size();i++){
            tong= tong + listsp[i];

    }

}