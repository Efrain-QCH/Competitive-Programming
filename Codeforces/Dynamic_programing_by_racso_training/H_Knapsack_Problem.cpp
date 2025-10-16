/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      H_Knapsack_Problem.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
const ll INF = 1e15;

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<pair<ll, ll>> items(n);
    for(int i=0; i<n; i++) {
        cin>>items[i].second>>items[i].first;
    }
    sort(all(items));
    vector<ll> dp(m+1, 0);
    for(int i=0;i<n;i++){
        for(int j=items[i].first;j<=m;j++){
            dp[j]=max(dp[j], dp[j-items[i].first]+items[i].second);
        }
    }
    cout<<dp[m]<<endl;
}

int main() {
    fastio;
    solve();
    return 0;
}