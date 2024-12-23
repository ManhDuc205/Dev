#include <iostream>
#include <cmath>
using namespace std;

class Diem {
private:
    float x, y;

public:
    void nhap() {
        cout << "Nhap toa do x: ";
        cin >> x;
        cout << "Nhap toa do y: ";
        cin >> y;
    }

    void xuat() {
        cout << "(" << x << ", " << y << ")";
    }

    double khoangcach(Diem d) {
        return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
    }
};

class TamGiac {
private:
    Diem d1, d2, d3;
    float canh1, canh2, canh3;

public:
    void nhap() {
        cout << "Nhap toa do diem 1:\n ";
        d1.nhap();
        cout << "Nhap toa do diem 2: ";
        d2.nhap();
        cout << "Nhap toa do diem 3: ";
        d3.nhap();

        // Tính độ dài các cạnh
        canh1 = d1.khoangcach(d2);
        canh2 = d2.khoangcach(d3);
        canh3 = d3.khoangcach(d1);

        cout << "canh 1: " << canh1 << endl;
        cout << "canh 2: " << canh2 << endl;
        cout << "canh 3: " << canh3 << endl;
    }

    void xuat() {
        cout << "\nDiem 1: ";
        d1.xuat();
        cout << endl;
        cout << "Diem 2: ";
        d2.xuat();
        cout << endl;
        cout << "Diem 3: ";
        d3.xuat();
        cout << endl;
    }

    void kiemtratamgiac() {
        // Kiểm tra tính chất tam giác
        if (canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh2 + canh3 > canh1) {
            // Kiểm tra tam giác vuông
            bool isVuong = (canh1 * canh1 + canh2 * canh2 == canh3 * canh3 || 
                            canh2 * canh2 + canh3 * canh3 == canh1 * canh1 || 
                            canh1 * canh1 + canh3 * canh3 == canh2 * canh2);

            // Kiểm tra tam giác đều
            if (canh1 == canh2 && canh2 == canh3) {
                cout << "La tam giac deu" << endl;
            }
            // Kiểm tra tam giác vuông
            else if (isVuong) {
                // Kiểm tra tam giác vuông cân
                if (canh1 == canh2 || canh2 == canh3 || canh3 == canh1) {
                    cout << "La tam giac vuong can" << endl;
                } else {
                    cout << "La tam giac vuong" << endl;
                }
            }
            // Kiểm tra tam giác cân
            else if (canh1 == canh2 || canh2 == canh3 || canh3 == canh1) {
                cout << "La tam giac can" << endl;
            }
            // Kiểm tra tam giác thường
            else {
                cout << "La tam giac thuong" << endl;
            }
        } else {
            cout << "Khong phai tam giac" << endl;
        }
    }
};

int main() {
    TamGiac tg;
    tg.nhap();
    cout << "Thong tin 3 diem cua tam giac: " << endl;
    tg.xuat();
    tg.kiemtratamgiac();
    return 0;
}
