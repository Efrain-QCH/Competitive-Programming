/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-14                      _/ \_ 
*  File :      E_Cyclic_Components.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<vector<int>> adj;
vector<bool> visited;

bool dfs(int u) {
    stack<int> st;
    st.push(u);
    visited[u] = true;
    bool is_cycle = true;

    while (!st.empty()) {
        int curr = st.top();
        st.pop();

        if (adj[curr].size() != 2) {
            is_cycle = false;
        }

        for (int v : adj[curr]) {
            if (!visited[v]) {
                visited[v] = true;
                st.push(v);
            }
        }
    }

    return is_cycle;
}

void solve() {
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1);
    vector<int> arr(n+1);
    iota(all(arr), 0);
    while (m--)
    {
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