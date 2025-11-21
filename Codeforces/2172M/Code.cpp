#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define nwl "\n"
#define FO(x) freopen(x".out", "w", stdout)
#define FI(x) freopen(x".in", "r", stdin)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(int tc) {
    int N, M, k;
    cin >> N >> M >> k;
    vector<vector<int>> adj(N + 1);
    vector<int> a(N + 1);
    for(int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    while(M--) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<pair<int, int>> bfs; bfs.push({1, 0});
    vector<bool> vis(N + 1, false);
    vector<int> ans(k + 1, 0);
    while(!bfs.empty()) {
        auto [node, val] = bfs.front(); bfs.pop();
        if(vis[node]) continue;
        vis[node] = true;
        ans[a[node]] = max(val, ans[a[node]]);
        for(auto nxt : adj[node]) {
            bfs.push({nxt, val + 1});
        }
    }
    for(int i = 1; i <= k; i++) cout << ans[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
