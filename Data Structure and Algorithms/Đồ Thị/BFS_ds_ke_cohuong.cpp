//BFS (Breadth-First Search - Tìm kiếm theo chiều rộng)
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int n, m;
vector<int> ke[1001];
bool visited[1001];
int u;
void input(){
    cin >> n >> m >> u;

    for(int i = 1; i <= n; i++){
        ke[i].clear();
    }
    memset(visited, false, sizeof(visited));

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        // có hướng 
    }

}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.empty() == false){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : ke[v]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        
        input();
        BFS(u);
        cout << endl;
    }
    
}
// 2
// 6 9 5

// 1 2

// 1 3

// 2 3

// 2 4

// 3 4

// 3 5

// 4 5

// 4 6

// 5 6
// 6 9 3
// 1 2

// 1 3

// 2 3

// 2 4

// 3 4

// 3 5

// 4 5

// 4 6

// 5 6