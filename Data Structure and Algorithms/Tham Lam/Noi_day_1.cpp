#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int minCost(vector<int>& dodai){
    priority_queue<int, vector<int>, greater<int>> m;
    for(int x : dodai){
        m.push(x);
    }
    int cost = 0;
    while(m.size() > 1){
        int first = m.top();
        m.pop();
        int second = m.top();
        m.pop();
        int tmp = first + second;
        cost += tmp;
        m.push(tmp);
    }
    return cost;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> day;
        for(int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            day.push_back(tmp);
            
        }
        cout << minCost(day) << endl;
    }
    
}