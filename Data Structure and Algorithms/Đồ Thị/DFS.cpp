//DFS (Depth-First Search - Tìm kiếm theo chiều sâu)
#include <iostream>
#include <vector>
#include <cstring>
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

void DFS(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v : adj[u]){
        if(visited[v] == false ){
            DFS(v);
        }
    }
}
int main(){
    input();
    DFS(2);
}