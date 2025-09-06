/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-22                      _/ \_ 
*  File :      B_Cyclic_Components.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<bool> visited;
vector<vector<int>> adj;

bool dfs(int u){
    visited[u]=1;
    
    bool ok=(adj[u].size()==2);
    for(auto v: adj[u]){
        if(!visited[v]){
             ok&=dfs(v);
        }
    }
    return ok;
    
}

void solve() {
    int n,m;
    cin>>n>>m;

    visited.resize(n+1);
    adj.resize(n+1);


    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans+=dfs(i);
        }
    }
    cout<<ans<<endl;

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