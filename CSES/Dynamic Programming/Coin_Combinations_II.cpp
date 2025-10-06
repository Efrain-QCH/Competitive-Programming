/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-03                      _/ \_ 
*  File :      Coin_Combinations_II.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

#define INF 1000000007

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    vector<ll> dp(k + 1, 0);
    dp[0] = 1;
    for (int j = 0; j < n; j++) { 
        for (int i = coins[j]; i <= k; i++) { 
            dp[i] = (dp[i] + dp[i - coins[j]]) % INF;
        }
    }
    cout << dp[k] << endl;
}

int main() {
    fastio;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }       
    return 0;
}