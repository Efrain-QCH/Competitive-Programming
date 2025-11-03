/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-27                      _/ \_ 
*  File :      D_DiviDuelo.cpp
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long

void solve() {
    ll n;
    cin >> n;
    map<ll,int> div;
    ll x = n;

    for (ll i = 2; i * i <= x; i++) {
        while (n % i == 0) {
            div[i]++;
            n /= i;
        }
    }
    if (n > 1) div[n]++; 

    if (div.size() == 1) {
        auto [p, exp] = *div.begin();
        cout << ((exp % 2 == 1) ? "Y" : "N") << "\n";
    } 
    else if (div.size() == 2) {
        bool is_pq = true;
        for (auto [p, e] : div) if (e != 1) is_pq = false;
        cout << (is_pq ? "Y" : "N") << "\n";
    } 
    else {
        cout << "N\n";
    }
}

int main() {
    fastio;
    int t = 1;
    //cin >> t;
    while (t--) solve();
}
