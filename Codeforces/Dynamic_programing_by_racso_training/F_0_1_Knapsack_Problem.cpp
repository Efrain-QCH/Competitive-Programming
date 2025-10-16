/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      F_0_1_Knapsack_Problem.cpp
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
const ll INF = 1e15;

void solve() {
    int n;
    ll W;
    cin >> n >> W;

    vector<ll> val(n), w(n);
    for (int i = 0; i < n; i++) cin >> val[i] >> w[i];

    ll sumV = accumulate(val.begin(), val.end(), 0LL);
    vector<ll> dp(sumV + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        for (ll v = sumV; v >= val[i]; v--) {
            dp[v] = min(dp[v], dp[v - val[i]] + w[i]);
        }
    }

    ll ans = 0;
    for (ll v = 0; v <= sumV; v++) {
        if (dp[v] <= W) ans = v;
    }

    cout << ans << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}
