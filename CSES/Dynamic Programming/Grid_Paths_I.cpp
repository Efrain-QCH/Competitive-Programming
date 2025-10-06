/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-03                      _/ \_ 
*  File :      Grid_Paths_I.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void dfs(int i, int j, vector<string>& scuar, vector<vector<int>>& dp, int n) {
    if(i>=n || j>=n) return;
    if(scuar[i][j]=='*') return;
    
    dp[i][j]++;
    if(i==n-1 && j==n-1) return;
    dfs(i+1, j, scuar, dp, n);
    dfs(i, j+1, scuar, dp, n);
}

void solve() {
    int n;
    vector<string> scuar(n);
    for(int i=0;i<n;i++) cin>>scuar[i];
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dfs(0,0,scuar, dp, n);
    cout<<dp[n-1][n-1]<<endl;
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