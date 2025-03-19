#include <bits/stdc++.h>
using namespace std;

/*
    cho một mảng số nguyên, in ra các phần tử trong mảng 
    theo thứ tự tần xuất xuất hiện giảm dần, nếu có nhiều 
    số có cùng số lần xuất hiện thì số nào nhỏ hơn sẽ được
    in ra trước.
    1. đếm tần xuất (map)
    2. Chuyền các phần tử trong map ra vector pair
    3. Viết comparator cho vector pair => sort
    4. in
*/
bool cmp(pair<int,int> a, pair<int, int> b){
    if(a.second != b. second){
        return a.second > b.second;
    }
    else return a.first < b.first;
}
int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i=0 ; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<pair<int, int>> v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(begin(v),end(v),cmp);
    for(auto it : v){
        //it.first : gia tri
        //it.second: tan suat
        for(int j = 0; j < it.second; j++){ // in ra so theo tan suat xuat hien cua no 
            cout << it.first << " ";
        }
    }
}