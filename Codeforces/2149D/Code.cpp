#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define nwl "\n"
#define FO(x) freopen(x".out", "w", stdout)
#define FI(x) freopen(x".in", "r", stdin)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll cost(vector<ll>& v) {
    if (v.empty()) return 0;
    ll ret = 0;
    int mid = v.size()/2;
    ll med = v[mid];
    for(int i = 0; i < v.size(); i++) {
        ret += (abs(v[i] - med) - abs(i - mid));
    }
    return ret;
}

void solve(int tc) {
    int N; cin >> N;
    string S; cin >> S;
    vector<ll> A, B;
    for(int i = 0; i < N; i++) {
        if(S[i] == 'a') A.pb(i);
        else B.pb(i);
    }
    cout << min(cost(A), cost(B)) << nwl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
