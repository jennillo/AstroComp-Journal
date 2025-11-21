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
    vector<int> p(k);
    vector<bool> state(N + 1, 0);
    for(int i = 0; i < k; i++) {
        cin >> p[i];
    }
    for(int i = 1; i <= N; i++) {
        for(auto x : p) {
            if(i - x >= 0 && state[i - x] == 0) {
                state[i] = 1;
                break;
            }
        }
        cout << (state[i]?'W':'L');
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++) solve(i);
    return 0;
}
