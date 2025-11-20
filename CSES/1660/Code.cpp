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
    int N; ll x;
    cin >> N >> x;
    vector<ll> a(N + 1);
    a[0] = 0;
    for(int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    while (l <= N && r <= N) {
        if(sum < x) {
            r++;
            sum += a[r];
        } else if(sum > x) {
            sum -= a[l];
            l++;
        } else {
            ans++;
            r++;
            sum += a[r];
        }
    }
    cout << ans << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
