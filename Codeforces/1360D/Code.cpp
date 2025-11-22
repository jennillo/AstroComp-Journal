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
    ll n, k; cin >> n >> k;
    vector<ll> num;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0 && i <= k) {
            num.pb(i);
            ll j = n / i;
            if(j <= k && i != j) num.pb(j);
        }
    }
    ll ans = n;
    for(auto x : num) {
        ans = min(ans, n / x);
    }
    cout << ans << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
