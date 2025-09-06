/**
*  Author :    zero_speed
*  Created :   2025-06-27
*  File :      A_Phone_Desktop.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int x, y;
    cin >> x >> y;

    int ans = (y + 1) / 2; 

    int celdas_usadas = y * 4;
    int celdas_totales = ans * 15;
    int celdas_libres = celdas_totales - celdas_usadas;
    x -= celdas_libres;
    if (x < 0) x = 0;
    ans += (x + 14) / 15;

    cout << ans << '\n';
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