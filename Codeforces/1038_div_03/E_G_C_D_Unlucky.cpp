/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-25                      _/ \_ 
*  File :      E_G_C_D_Unlucky.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> p(n), s(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    bool ok = true;
    for (int i = 0; i < n; i++) {
        ll g = gcd(p[i], s[i]);
        
        if (g != p[i] && g != s[i] && g < min(p[i], s[i])) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
