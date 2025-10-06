/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-03                      _/ \_ 
*  File :      Coin_Combinations_I.cpp
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
    ll n, k;cin>>n>>k;
    vector<ll> coins(n);
    for(int i=0;i<n;i++)cin>>coins[i];
    vector<ll> dp(k+1, 0);
    dp[0]=1;
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]+=dp[i-coins[j]];
                dp[i]%=INF;
            }
        }
    }
    cout<<dp[k]%INF<<endl;
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