/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-03                      _/ \_ 
*  File :      Minimizing_Coins.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

#define INF 1e9

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> coins(n);
    for(auto & x: coins) cin>>x;
    vector<int> dp(k+1, INF);
    dp[0]=0;
    for(int i=1;i<=k;i++){
        for(auto x: coins){
            if(i-x>=0){
                dp[i]=min(dp[i], dp[i-x]+1);
            }
        }
    }
    if(dp[k]==INF){
        cout<<-1;
    }else{
        cout<<dp[k];
    }
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