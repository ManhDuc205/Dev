#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct edge{
    int x, y , w;
};
int n, m;
bool taken[100001];
vector<pair<int, int>> ke[100001];

void nhap(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y, w; cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w}); // lưu trọng số, đỉnh
    }
}

void Prim(int s){
    taken[s] = true; // nạp s vào cây khung
    // min heap
    priority_queue<pair<int, int>, vector<pair<int ,int>>, greater<pair<int, int>>> Q;
    for(auto it : ke[s]){
        int t = it.first;
        if(!taken[t]){
            Q.push({it.second, t});
        }
    }
    int d = 0;
    while(!Q.empty()){
        // lấy ra cạnh ngắn nhất 
        pair<int, int> e = Q.top();
        Q.pop();
        int u = e.second; int w = e.first;
        if(!taken[u]){
            d += w;
            taken[u] = true;
            for(auto it : ke[u]){
                if(!taken[it.first]){
                    Q.push({it.second, it.first});
                }
            }
        }
    }
    cout << d << endl;
}

int main() {
    nhap();
    Prim(1);
}
