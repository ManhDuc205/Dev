#include <iostream>
#include <math.h>
using namespace std;
class SoPhuc{
    private:
        int phanthuc, phanao;
    public:
        void nhap();
        void xuat();
        SoPhuc tong(SoPhuc sq2);
        SoPhuc hieu(SoPhuc sq2);
        float module();
};
void SoPhuc::nhap(){
    cin >> this->phanthuc >> this->phanao;
}
void SoPhuc::xuat(){
    cout << this->phanthuc  <<" + "<< this->phanao << "i" << endl;
}
SoPhuc SoPhuc::tong(SoPhuc sp2){
    SoPhuc sum;
    sum.phanthuc = phanthuc + sp2.phanthuc;
    sum.phanao = phanao + sp2.phanao;
    return sum;
}
SoPhuc SoPhuc::hieu(SoPhuc sp2){
    SoPhuc sub;
    sub.phanthuc = phanthuc - sp2.phanthuc;
    sub.phanao = phanao - sp2.phanao;
    return sub;
}
float SoPhuc::module(){
    float md;
    md = sqrt(phanthuc* phanthuc + phanao * phanao);
    return md;
}
int main(){
    SoPhuc sp1, sp2;
    sp1.nhap();
    sp2.nhap();
    sp1.tong(sp2).xuat();
    sp1.hieu(sp2).xuat();
    cout << sp1.module() << endl;
    cout << sp2.module() << endl;
}