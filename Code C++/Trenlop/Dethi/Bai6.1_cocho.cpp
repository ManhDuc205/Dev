#include <iostream>
using namespace std;

class MaTran {
private:
    int m, n;
    int **arr;

public:
    // Constructor mặc định
    MaTran() : m(0), n(0), arr(nullptr) {}

    // Constructor với kích thước
    MaTran(int m, int n) : m(m), n(n) {
        arr = new int *[m];
        for (int i = 0; i < m; i++) {
            arr[i] = new int[n];
        }
    }


    // Toán tử nhập
    friend istream &operator>>(istream &is, MaTran &a) {
        cout << "Nhap so hang va so cot: ";
        is >> a.m >> a.n;


        // Cấp phát lại bộ nhớ
        a.arr = new int *[a.m];
        for (int i = 0; i < a.m; i++) {
            a.arr[i] = new int[a.n];
        }

        cout << "Nhap cac phan tu ma tran:" << endl;
        for (int i = 0; i < a.m; i++) {
            for (int j = 0; j < a.n; j++) {
                is >> a.arr[i][j];
            }
        }
        return is;
    }

    // Toán tử xuất
    friend ostream &operator<<(ostream &os, const MaTran &a) {
        for (int i = 0; i < a.m; i++) {
            for (int j = 0; j < a.n; j++) {
                os << a.arr[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }

    // Toán tử cộng
    MaTran operator+(const MaTran &mt1) {
        MaTran temp(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                temp.arr[i][j] = arr[i][j] + mt1.arr[i][j];
            }
        }
        return temp;
    }

    // Toán tử trừ
    MaTran operator-(const MaTran &mt1) {
        MaTran temp(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                temp.arr[i][j] = arr[i][j] - mt1.arr[i][j];
            }
        }
        return temp;
    }

    // Hàm tính tổng phần tử trên đường chéo chính
    int TongptDcc() {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += arr[i][i];
        }
        return sum;
    }
};

int main() {
    int m, n;
    cout << "Nhap kich thuoc ma tran (m, n): ";
    cin >> m >> n;

    MaTran mt1(m, n), mt2(m, n);
    cout << "Nhap ma tran 1:" << endl;
    cin >> mt1;

    cout << "Nhap ma tran 2:" << endl;
    cin >> mt2;

    cout << "Ma tran 1:\n" << mt1;
    cout << "Ma tran 2:\n" << mt2;

    cout << "Tong 2 ma tran:\n" << mt1 + mt2;

    cout << "Tong phan tu tren duong cheo chinh cua ma tran 1: " << mt1.TongptDcc() << endl;

    return 0;
}
