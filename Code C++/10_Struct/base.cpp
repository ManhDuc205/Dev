#include <bits/stdc++.h>
using namespace std;

struct Sinhvien {
    string msv;
    string hoten;
    double gpa;
};

int main() {
    Sinhvien sv[50];
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; ++i) {
        cout << "Enter information for student " << i + 1 << ":\n";
        
        cout << "Ma sinh vien: ";
        getline(cin, sv[i].msv);
        
        cout << "Ho va ten: ";
        getline(cin, sv[i].hoten);
        
        cout << "GPA: ";
        cin >> sv[i].gpa;
        cin.ignore(); 
    }

    for (int i = 0; i < n; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Ma sinh vien: " << sv[i].msv << endl;
        cout << "Ho va ten: " << sv[i].hoten << endl;
        cout << "GPA: " << sv[i].gpa << endl;
    }

    return 0;
}
