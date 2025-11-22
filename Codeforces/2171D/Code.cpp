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
    int N; cin >> N;
    vector<int> p(N + 1), pref(N + 2), suff(N + 2);
    vector<pair<int, int>> ans;
    pref[0] = MX; suff[N + 1] = MN;
    for(int i = 1; i <= N; i++) {
        cin >> p[i];
        pref[i] = min(pref[i - 1], p[i]);
    }
    for(int i = N; i >= 1; i--) {
        suff[i] = max(suff[i + 1], p[i]);
    }
    for(int i = 1; i < N; i++) {
        if(pref[i] > suff[i + 1]) {
            cout << "NO" << nwl;
            return;
        }
    }
    cout << "YES" << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
