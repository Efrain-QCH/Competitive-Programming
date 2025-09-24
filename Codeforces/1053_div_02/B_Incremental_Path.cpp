/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-24                      _/ \_ 
*  File :      B_Incremental_Path.cpp
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

unordered_map<ll,ll> parent;

ll find_next(ll x) {
    if (!parent.count(x)) return x; 
    return parent[x] = find_next(parent[x]); 
}

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    set<ll> blacks;
    parent.clear();

    for (int i = 0; i < m; i++) {
        ll x; cin >> x;
        blacks.insert(x);
        parent[x] = x + 1; 
    }

    ll pos = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            pos++;
        } else {
            pos = find_next(pos + 1);
        }
        blacks.insert(pos);
        parent[pos] = pos + 1;
        if(s[i]=='B') pos = find_next(pos + 1);
    }

    cout << (int)blacks.size() << endl;
    for (ll x : blacks) cout << x << " ";
    cout << endl;
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
