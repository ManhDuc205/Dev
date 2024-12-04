#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> se = {1, 3, 1, 1, 2, 3, 1, 4, 1};
    cout << "So phan tu trong set : " << se.size() << endl;
    cout << "Cac phan tu trong set :\n";
    for(int x : se){
        cout << x << " ";
    }
    cout << endl;
    if(se.find(3) == se.end()){
        cout << "NOT FOUND\n";
    }
    else{
        cout << "FOUND\n";
    }
}