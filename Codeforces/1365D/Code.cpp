#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define nwl "\n"
#define FO(x) freopen(x".out", "w", stdout)
#define FI(x) freopen(x".in", "r", stdin)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MN = 0;
const int MX = 1e6;

void solve(int tc) {
    int N, M; cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));
    int good = 0;
    vector<pair<int, int>> bad;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'G') good++;
            if(grid[i][j] == 'B') bad.pb({i, j});
        }
    }
    for(auto [x, y] : bad) {
        int mx[] = {1, -1, 0, 0};
        int my[] = {0, 0, 1, -1};
        for(int i = 0; i < 4; i++) {
            int nx = x + mx[i];
            int ny = y + my[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M) {
                if(nx == N - 1 && ny == M - 1 && good != 0) {
                    cout << "no" << nwl;
                    return;
                }
                else if(grid[nx][ny] == 'G') {
                    cout << "NO" << nwl;
                    return;
                } 
                else grid[nx][ny] = '#';
            }
        }
    }
    int cnt = 0;
    stack<pair<int, int>> dfs;
    vector<vector<bool>> vis(N, vector<bool>(M, false));
    dfs.push({N - 1, M - 1});
    while(!dfs.empty()) {
        auto [x, y] = dfs.top(); dfs.pop();
        if(vis[x][y]) continue;
        vis[x][y] = true;
        if(grid[x][y] == 'G') cnt++;
        int mx[] = {1, -1, 0, 0};
        int my[] = {0, 0, 1, -1};
        for(int i = 0; i < 4; i++) {
            int nx = x + mx[i];
            int ny = y + my[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M && !vis[nx][ny] && grid[nx][ny] != '#') {
                dfs.push({nx, ny});
            }
        }
    }
    if(cnt == good) cout << "Yes" << nwl;
    else cout << "No" << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
