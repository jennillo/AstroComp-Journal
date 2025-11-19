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
    int N, k; cin >> N >> k;
    vector<int> a(N);
    int x = 0, y = 0;
    set<int> s;
    for(int i = 0; i < N; i++) {
        int a; cin >> a;
        s.insert(a);
        if(a == k) x++;
    }
    for(int i = 0; i < k; i++) {
        if(s.count(i) == 0) y++;
    }
    cout << max(x, y) << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
