/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      F_Comprando_tinta_para_la_impresora.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define INF 1e18

void solve() {
    int a, b, c, d, x, y, z;
    cin >> a >> b >> c >> d >> x >> y >> z;

    ll minCost = INF;
    int bestLiq = 0, bestSec = 0;

    
    for (int liq = 0; liq * b <= z + max(b, d); ++liq) {
        int hojasLiq = liq * b;
        int faltan = max(0, z - hojasLiq);

        int sec = (faltan + d - 1) / d; 
        int hojasSec = sec * d;

        ll totalCost = 1LL * liq * a + 1LL * sec * c;

        

        if (totalCost < minCost || (totalCost == minCost && liq < bestLiq)) {
            minCost = totalCost;
            bestLiq = liq;
            bestSec = sec;
        }
    }
    if (minCost < y) minCost += x;

    cout << minCost << " " << bestLiq << " " << bestSec << "\n";
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