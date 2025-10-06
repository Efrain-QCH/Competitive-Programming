/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-03                      _/ \_ 
*  File :      Removing_Digits.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    const int INF = 1e9;
    int n;
    cin>>n;
    vector<int> dp(n+1, INF);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        int aux=i;
        while(aux){
            int d=aux%10;
            if(d!=0){
                dp[i]=min(dp[i-d]+1, dp[i]);
            }
            aux/=10;
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