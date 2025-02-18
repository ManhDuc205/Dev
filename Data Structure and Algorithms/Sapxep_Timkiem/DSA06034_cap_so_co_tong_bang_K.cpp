#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là đếm xem có bao nhiêu cặp (i, j) mà A[i] + A[j] = K cho trước.

Input:

Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 10^9).
Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).
Output:

Với mỗi test, in ra trên một dòng là đáp án thu được.*/
int Firstbinary_sort(vector<int>& a, int x) {
    int res = -1;
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            res = m;
            r = m - 1; 
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

int Lastbinary_sort(vector<int>& a, int x) {
    int res = -1;
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            res = m;
            l = m + 1; 
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

int main() {

    int n, k;
        cin >> n >> k;
        vector<int> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long count = 0;

        for (int i = 0; i < n; i++) {

            int first = Firstbinary_sort(a, k - a[i]);
            int last = Lastbinary_sort(a, k - a[i]);

            if (first != -1) { 
                count += (last - first + 1); 
            }
        }
        cout << count << endl;
    
    return 0;
}
