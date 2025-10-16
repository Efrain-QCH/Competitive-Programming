/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      J_Coin_Changing_Problem.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m;
    cin>>n>>m;
    vector<ll> coins(m);
    for(ll& x: coins) cin>>x;
    sort(all(coins));
    vector<ll> dp(n+1, INT_MAX);
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(coins[j]>i) break;
            if(i==coins[j]) dp[i]=1;
            dp[i]=min(dp[i], dp[i-coins[j]]+1);
        }
    }
    cout<<dp[n]<<endl;
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