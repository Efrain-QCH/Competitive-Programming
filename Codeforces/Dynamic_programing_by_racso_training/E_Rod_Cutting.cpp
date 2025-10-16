/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      E_Rod_Cutting.cpp
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
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<ll> dp(n + 1, 0);
    dp[1] = arr[1];
    for(int i=1;i<=n;i++){
        dp[i] = arr[i];
        for(int j=0;j<=i;j++){
            dp[i] = max(dp[i], dp[j] + dp[i-j]);
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