/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-29                      _/ \_ 
*  File :      C_2_Message_Transmission_Error_hard_version.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<int> prefix_function(const string &s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j]) j = pi[j-1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

void solve() {
    string t; cin >> t;
    int n = t.size();

    auto pi = prefix_function(t);

    for (int i = 1; i < n; i++) {
        if (pi[n-1] >= n - i && i < n - i) {
            cout << "YES\n";
            cout << t.substr(0, n - i) << "\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    fastio;
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}