//BFS (Breadth-First Search - Tìm kiếm theo chiều rộng)
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visited[1001];
int a[1001][1001];
void input(){
    cin >> n >> m;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] != 0){
                adj[i].push_back(j);
            }
        }
    }
    memset(visited , false, sizeof(visited));
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.empty() == false){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    input();
    BFS(2);
}
// 6 11 
// 0 0 1 0 1 1 
// 0 0 1 0 1 1
// 1 1 0 1 1 1
// 0 0 1 0 1 0 
// 1 1 1 1 0 1
// 1 1 1 0 1 0
// kq : 2 3 5 6 1 4