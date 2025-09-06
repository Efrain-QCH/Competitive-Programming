/**
*  Author :    zero_speed
*  Created :   2025-06-30
*  File :      A_Connect_and_Disconnect.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

struct DSU {
    vector<int> parent, size;
    stack<tuple<int, int, int>> history;  // (a, b, size[a])
    int components;

    DSU(int n) {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
        components = n;
    }

    int find(int x) {
        while (x != parent[x]) x = parent[x];
        return x;
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) {
            history.emplace(-1, -1, -1);
            return;
        }
        if (size[a] < size[b]) swap(a, b);
        history.emplace(a, b, size[a]);
        parent[b] = a;
        size[a] += size[b];
        components--;
    }

    void rollback() {
        if (history.empty()) return;
        auto [a, b, sz_a] = history.top();
        history.pop();
        if (a == -1) return; // no-op
        parent[b] = b;
        size[a] = sz_a;
        components++;
    }
};

const int MAX = 3e5 + 5;
vector<pair<int, int>> seg[4 * MAX];

void add(int node, int l, int r, int ql, int qr, pair<int, int> edge) {
    if (qr < l || r < ql) return;
    if (ql <= l && r <= qr) {
        seg[node].push_back(edge);
        return;
    }
    int mid = (l + r) / 2;
    add(2 * node, l, mid, ql, qr, edge);
    add(2 * node + 1, mid + 1, r, ql, qr, edge);
}

vector<int> ans;
map<pair<int, int>, int> active;

void solve(int node, int l, int r, DSU &dsu, vector<tuple<char, int, int>> &queries) {
    for (auto &[u, v] : seg[node]) dsu.unite(u, v);

    if (l == r) {
        auto &[type, u, v] = queries[l];
        if (type == '?') ans.push_back(dsu.components);
    } else {
        int mid = (l + r) / 2;
        solve(2 * node, l, mid, dsu, queries);
        solve(2 * node + 1, mid + 1, r, dsu, queries);
    }

    for (int i = 0; i < (int)seg[node].size(); ++i) dsu.rollback();
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<tuple<char, int, int>> queries(q);
    map<pair<int, int>, int> edge_time;

    for (int i = 0; i < q; ++i) {
        char c;
        cin >> c;
        int u = 0, v = 0;
        if (c != '?') {
            cin >> u >> v;
            if (u > v) swap(u, v);
        }
        queries[i] = {c, u, v};
        if (c == '+') {
            edge_time[{u, v}] = i;
        } else if (c == '-') {
            int start = edge_time[{u, v}];
            add(1, 0, q - 1, start, i - 1, {u, v});
            edge_time.erase({u, v});
        }
    }

    for (auto &[e, start] : edge_time) {
        add(1, 0, q - 1, start, q - 1, e);
    }

    DSU dsu(n);
    solve(1, 0, q - 1, dsu, queries);

    for (int x : ans) cout << x << '\n';
    return ;
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
