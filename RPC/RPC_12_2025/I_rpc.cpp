/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      I_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m, s, p, q; cin >> n >> m >> s >> p >> q;
    set<int> p1, q1;

    while(p--){
        int x; cin >> x;
        p1.insert(x);
    }

    while(q--){
        int x; cin >> x;
        q1.insert(x);
    }

    vector<vector<int>> adj(n+1, vector<int>(m));
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            adj[j][i] = k++;
        }
    }

    vector<pair<pair<int,int>, pair<int,int>>> ans(n,{{0,0}, {0,0}});
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(p1.find(adj[i][j]) != p1.end()){
                if(q1.find(adj[i][j]) != q1.end()) ans[i].second.second++;
                else ans[i].second.first++;
            } else if(q1.find(adj[i][j]) != q1.end()) ans[i].first.first++;
            else ans[i].first.second++;
        }
    }

    int sum = 0, prin = -1, final = -1;
    for(int i = 0; i < n; i++){
        
        sum += min(ans[i].first.first + ans[i].second.first,
                   ans[i].first.second + ans[i].second.first + 1,
                    ans[i].first.first + ans[i].second.second + 1);
        if(ans[i].first.second != 0 || ans[i].second.second != 0
           || ans[i].first.first != 0 || ans[i].second.first != 0 && prin == -1){
            prin = i+1;
        }

        if(ans[i].first.second != 0 || ans[i].second.second != 0
           || ans[i].first.first != 0 || ans[i].second.first != 0 && prin != -1
           && final == -1){
            final = i+1;
        }
    }

    cout << sum + abs(prin - final) + abs(s - prin) << endl;
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