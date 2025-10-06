/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-02                      _/ \_ 
*  File :      Dice_Combinations.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n;
    cin>>n;
    vector<int> dp(n+1, 0);
    dp[1] = 0;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=max(0, i-6);j<i;j++){
            dp[i]+=dp[j];
            dp[i]%=(ll)(1e9+7);
        }
        if(i<=6) dp[i]++;
        dp[i]%=(ll)(1e9+7);
    }
    dp[n]%=((ll)1e9+7);
    cout<<dp[n];
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