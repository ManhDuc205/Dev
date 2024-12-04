#include <iostream>
using namespace std;

class DT {
private:
    int n, a[10] = {0};

public:
    DT() {}

    DT(int c, int b[10]) {
        n = c;
        for (int i = 0; i < c; i++) {
            a[i] = b[i];
        }
    }

    void NhapDT();
    void XuatDT();
    DT Tong(DT dt2);
    DT Hieu(DT dt2);
};

void DT::NhapDT() {
    cout << "Nhap bac cua da thuc: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cout << "Nhap he so bac " << i << ": ";
        cin >> a[i];
    }
}

void DT::XuatDT() {
    cout << a[n] << "x^" << n;
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] > 0) {
            cout << " + " << a[i] << "x^" << i;
        }
        else if (a[i] < 0) {
            cout << " - " << -a[i] << "x^" << i;
        }
    }
    if (a[0] >= 0)
        cout << " + " << a[0];
    else
        cout << " - " << -a[0];
    cout << endl;
}

DT DT::Tong(DT dt2) {
    DT t;
    t.n = max(n, dt2.n);  // Đặt bậc là bậc lớn nhất của hai đa thức

    for (int i = 0; i <= t.n; i++) {
        t.a[i] = a[i] + dt2.a[i];
    }
    return t;
}
DT DT::Hieu(DT dt2){
    DT t;
    t.n = max(n, dt2.n);
    for(int i = 0; i<= t.n; i++){
        t.a[i] = a[i] - dt2.a[i];
    }
    return t;
}
int main() {
    DT dt1, dt2, t;
    cout << "Nhap da thuc thu nhat:\n";
    dt1.NhapDT();
    cout << "Nhap da thuc thu hai:\n";
    dt2.NhapDT();
    cout << "Tong hai da thuc: ";
    t = dt1.Tong(dt2);
    t.XuatDT();
    cout << "Hieu 2 da thuc";
    t = dt1.Hieu(dt2);
    t.XuatDT();
    return 0;
}
