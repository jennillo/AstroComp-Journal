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
    ll ans = 0, x; 
    for(int i = 0; i < N; i++) {
        cin >> x;
        x %= 4;
        ans ^= x;
    }
    cout << (ans == 0 ? "second" : "first") << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
