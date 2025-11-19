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
    int neg = 0, zero = 0;
    for(int i = 0; i < N; i++) {
        int x; cin >> x;
        if(x == -1) neg++;
        else if(x == 0) zero++;
    }
    cout << 2 * (neg & 1) + zero << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
