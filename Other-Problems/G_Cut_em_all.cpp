/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-22                      _/ \_ 
*  File :      G_Cut_em_all.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

int ans=0;
vector<bool> visited;
vector<vector<int>> adj;

void dfs(int u, bool ok){
    visited[u]=1;
    if(ok){
        if(adj[u].size()>1){
            ans++;
            //  if(adj[u].size()%2!=0) 
            //ans+=max(0,(int)adj[u].size()-2);
        }
        if(adj[u].size()>2){
            for(auto v: adj[u]){
                if(!visited[v] && adj[v].size()>1){
                    ans++;
                }
            }
            //  if(adj[u].size()%2!=0) 
            //ans+=max(0,(int)adj[u].size()-2);
        }
    }
    for(auto v: adj[u]){
        if(!visited[v]){
            dfs(v,1^ok);
        }
    }
}

void solve() {
    int n,m;
    cin>>n;
    adj.resize(n+1);
    visited.resize(n+1);
    if(n%2!=0){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i+1<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int init=0;
    for(int i=1;i<=n;i++){
        if(adj[i].size()==1){
            init=i;
            break;
        }
    }
    dfs(init,1);
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