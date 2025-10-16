/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      G_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<vector<string>> adj1, adj2;
vector<bool> visited1, visited2;;
string padre="";

void dfs(string u){
    visited1[u]=true;
    for(auto v : adj1[u]){
        if(!visited1[v]){
            
            padre=v;
            dfs(v);
        }
    }
}


void solve() {
    int n;
    cin>>n;
    adj1.resize(n);
    adj2.resize(n);
    for(int i=0;i<n;i++){
        string a,b,c,d;
        cin>>a>>b>>c>>d;
        adj1[a].push_back(d);
        adj2[d].push_back(a);
    }

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}