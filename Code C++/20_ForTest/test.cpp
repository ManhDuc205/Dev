#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    set<int> se;
    int Q; cin >> Q;
    for(int i =0 ; i < Q; i++){
        int x, y;
        cin >> y >> x;
        if(y==1){
            se.insert(x);
        }
        else if(y==2){
            se.erase(x);
        }
        else if(y ==3){
            set<int>::iterator it = se.find(x);
            if(it != se.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
