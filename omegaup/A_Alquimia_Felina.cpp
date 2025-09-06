/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      A_Alquimia_Felina.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

struct Node {
    int intervalo;
    char l, r;

    Node() : intervalo(0), l(0), r(0) {}            
    Node(char c) : intervalo(1), l(c), r(c) {}         
};


int n, q;
string s;
vector<Node> arbol;

Node juntar(const Node &a, const Node &b) {
    if (a.intervalo == 0) return b;
    if (b.intervalo == 0) return a;
    Node res;
    res.intervalo = a.intervalo + b.intervalo - (a.r == b.l);
    res.l = a.l;
    res.r = b.r;
    return res;
}

void init(int id, int l, int r) {
    if (l == r) {
        arbol[id] = Node(s[l]);
        return;
    }
    int mid = (l + r) / 2;
    init(id * 2, l, mid);
    init(id * 2 + 1, mid + 1, r);
    arbol[id] = juntar(arbol[id * 2], arbol[id * 2 + 1]);
}

void update(int id, int l, int r, int pos, char val) {
    if (l == r) {
        arbol[id] = Node(val);
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid)
        update(id * 2, l, mid, pos, val);
    else
        update(id * 2 + 1, mid + 1, r, pos, val);
    arbol[id] = juntar(arbol[id * 2], arbol[id * 2 + 1]);
}

Node query(int id, int l, int r, int ql, int qr) {
    if (qr < l || r < ql)
        return Node(); 
    if (ql <= l && r <= qr)
        return arbol[id];
    int mid = (l + r) / 2;
    return juntar(
        query(id * 2, l, mid, ql, qr),
        query(id * 2 + 1, mid + 1, r, ql, qr)
    );
}

void solve() {
    cin >> n >> q;
    cin >> s;
    s = ' ' + s;
    arbol.resize(4 * n + 5);

    init(1, 1, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r).intervalo << endl;
        } else {
            int pos;
            char c;
            cin >> pos >> c;
            update(1, 1, n, pos, c);
        }
    }
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