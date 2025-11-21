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
    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    if(x[2] - x[0] >= 10) cout << "check again\n";
    else cout << "final " << x[1] << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
