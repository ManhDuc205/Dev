#include <iostream>
#include <vector>
using namespace std;
void Try(vector<int> a){
    int n = a.size();
    cout << "[" ;
    for(int i = 0; i < n; i++){
        if(i == n - 1){
            cout << a[i];
        }
        else{
            cout << a[i] << " ";
        }
    }
    cout << "]" << endl;

    if(n == 1) return;
    vector<int> temp;
    for(int i = 0; i < n - 1;i++){
        temp.push_back(a[i] + a[i + 1]);
    }
    Try(temp);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }
        Try(a);
        
    }
}