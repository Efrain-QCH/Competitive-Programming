/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      D_Grimorio_Antiguo.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

bool dfs(int n, const vector<pair<int, int>>& edges, int upto) {
    vector<vector<int>> g(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i <= upto; i++) {
        auto [u, v] = edges[i];
        g[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    int count = 0;
    for (int i = 1; i <= n; i++) if (indeg[i] == 0) q.push(i);
    while (!q.empty()) {
        int u = q.front(); q.pop(); count++;
        for (int v : g[u]) if (--indeg[v] == 0) q.push(v);
    }
    return count != n; 
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    for (auto& [u, v] : edges) cin >> u >> v;

    int lo = 0, hi = m - 1, ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (dfs(n, edges, mid)) {
            ans = mid + 1;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
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