#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;
int n, m;
vector<int> ke[1000001], t_ke[1000001];
bool visited[100001];
stack<int> st;

void nhap(){
    cin >> n >> m;
    for(int i = 0; i < m ;i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void DFS1(int u){
    visited[u] = true;
    for(int v : ke[u]){
        if(!visited[v]){
            DFS1(v);
        }
    }
    st.push(u);
}
// DFS sử dụng cho đồ thị lật ngược 
void DFS2(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v : t_ke[u]){
        if(!visited[v]){
            DFS2(v);
        }
    }
}
void kosaraju(){
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    int scc = 0; // đếm số lượng thành phần liên thông mạnh
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!visited[top]){
            ++scc;
            DFS2(top);
            cout << endl;
        }
    }
    cout << scc << endl;
}
int main(){
    nhap();
    kosaraju();
}
// 7 8
// 1 2
// 2 3
// 3 1
// 3 6
// 6 4
// 4 5
// 5 7
// 7 4
// out put:
// 1 3 2
// 6
// 4 7 5
// 3 thành phần liên thông
