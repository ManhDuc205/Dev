#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge{
    int x, y , w;
};
int n, m;
int sz[100001], parent[100001];
vector<edge> dscanh;
void ktao(){
    for(int i = 1; i <= n; i++){
        sz[i] = 1;
        parent[i] = i;
    }
}

int Find(int u){
    if(u == parent[u]){
        return u;
    }
    else {
        return parent[u] = Find(parent[u]);
    }
}

bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v){ // Nếu cùng một tập hợp, không cần nối
        return false;
    }
    if (sz[u] > sz[v]) { // Nối cây nhỏ vào cây lớn hơn
        parent[v] = u;
        sz[u] += sz[v];
    } else {
        parent[u] = v;
        sz[v] += sz[u]; 
    }
    return true;
}


void nhap(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x , y , w;
        cin >> x >> y >> w;
        dscanh.push_back((edge){x, y , w});
    }
}

void Kruskal(){
    // sap xep dscanh theo trong số tăng dần
    sort(dscanh.begin(), dscanh.end(), [](edge a, edge b)->bool{
        return a.w < b.w;
    });
    // lap
    int d = 0;
    vector<edge> MST;
    for(int i = 0; i< m; i++){
        if(MST.size() == n - 1){
            break;
        }
        edge e = dscanh[i];
        // MST + e => co tao thanh chu trình
        if(Union(e.x, e.y)){
            MST.push_back(e);
            d += e.w;
        }
    }
    cout << d << endl;
    for(auto it : MST){
        cout << it.x << ' ' << it.y << ' ' << it.w << endl;
    }
}
int main() {
    nhap();
    ktao();
    Kruskal();
    return 0;
}
