//DFS (Depth-First Search - Tìm kiếm theo chiều sâu)
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
int  u, t;
void input(){
    cin >> n >> m;
    cin >> u >> t;
    for(int i = 1; i <= n; i++){
        ke[i].clear();
    }
    memset(visited, false, sizeof(visited));

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }

}

void DFS(int u){
    visited[u] = true;
    for(int v : ke[u]){
        if(visited[v] == false ){
            DFS(v);
            parent[v] = u;
        }
    }
}
int main(){
    int T; cin >> T;
    while(T--){
        
        input();
        DFS(u);
        if(!visited[t]){
            cout << "-1" << endl;
        }
        else{
            vector<int> res;
            while(t != u){
                res.push_back(t);
                t = parent[t];
            }
            res.push_back(u);
            reverse(res.begin(), res.end());
            for(int x : res){
                cout << x << " ";
            }
        }
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