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
    string n; cin >> n;
    int j, k; cin >> j >> k;
    string s = n, t = n;
    for(int i = 2; i <= j; i++) next_permutation(s.begin(), s.end());
    for(int i = 2; i <= k; i++) next_permutation(t.begin(), t.end());
    int a = 0;
    for(int i = 0; i < n.size(); i++) if(s[i] == t[i]) a++;
    cout << a << 'A' << n.size()-a << 'B' << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
