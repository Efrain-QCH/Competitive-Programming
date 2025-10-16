/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-07                      _/ \_ 
*  File :      Grid_Paths_I.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n;
    cin >> n;
    vector<vector<char>> arr(n + 1, vector<char>(n + 1));
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));
    ll MOD = 1e9 + 7;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if (i == 1 && j == 1) {
                dp[i][j] = 1;
            } else {
                
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    cout << dp[n][n] << endl;

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
