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
    int N; cin >> N;
    vector<ll> dp(N + 1), en;
    vector<tuple<ll, ll, ll>> v(N + 1);
    v[0] = {0, 0, 0};
    for(int i = 1; i <= N; i++) {
        ll a, b, p; cin >> a >> b >> p;
        v[i] = {b, a, p};
    }
    sort(v.begin(), v.end());
    dp[0] = 0;
    en.pb(0);
    for(int i = 1; i <= N; i++) {
        auto [b, a, p] = v[i];
        en.pb(b);
        dp[i] = dp[i - 1];
        int j = lower_bound(en.begin(), en.end(), a) - en.begin() - 1;
        dp[i] = max(dp[i], dp[j] + p);
    }
    cout << dp[N] << nwl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
