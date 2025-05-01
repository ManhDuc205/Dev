#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <cstring>
#include <tuple>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int mx_n = 1005;
#define Fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, k, m, cnt; // cnt dùng để đếm số cừu trong mỗi không gian bị ngăn cáchcách
set <tuple<int,int,int,int>> se;
int a[mx_n][mx_n];
bool used[mx_n][mx_n];
vector <int> v;
int dy[4] = {-1,0,0,1};
int dx[4] = {0,-1,1,0};
void BFS(int i, int j){
    cnt = 0;
    queue <pair<int,int>> q;
    q.push({i,j}); ++cnt;
    used[i][j] = true;
    while(q.size()>0){
        pair <int,int> p = q.front(); q.pop();
        for(int k = 0; k < 4; k++){
            int ni = p.first + dy[k];
            int nj = p.second + dx[k];
            if(ni >= 1 && ni <= n && nj >= 1 && nj <= n && !used[ni][nj]){
                if(se.count({ p.first, p.second, ni, nj})>0 || se.count({ ni, nj, p.first, p.second})>0)
                    continue; // kiểm tra xem có ngăn cách không, nếu có thì bỏ qua
                if(a[ni][nj]==1) ++cnt;  // nếu  tìm được cừu thì cập nhật biến cnt
                q.push({ni,nj}); 
                used[ni][nj] = true;
            }               
        }
    }
    v.push_back(cnt);
}
void Nhap(){
    memset(used,false,sizeof(used));
    memset(a,0,sizeof(a));
    se.clear();
    v.clear();
    cin >> n >> k >> m;
    for(int i = 0; i < m; i++){
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        se.insert({x,y,z,t});
    }
    for(int i = 0; i < k; i++){
        int x, y; cin >> x >> y;
        a[x][y] = 1;
    }
}
ll Count(){
    ll dem = 0; // đếm số cặp cừu
    for(int i = 0; i < v.size()-1; i++){  
        for(int j = i+1; j < v.size(); j++){
            dem += 1ll*v[i]*v[j];
        }
    }
    return dem;
}
void TestCase(){
    Nhap();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(!used[i][j] && a[i][j]==1){ // vị trí nào có cừu thì trên ma trận có số 1
                BFS(i,j);
            }
        }
    }
    cout << Count();
}
int main(){
    Fast();
    // int t;
    // cin >> t;
    // while(t--){
        TestCase();
    //}
    return 0;
}
/*More bugs, more exp*/