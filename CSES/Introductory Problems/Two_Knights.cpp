/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-08                      _/ \_ 
*  File :      Two_Knights.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        // Total formas de colocar dos caballos en distintas casillas
        long long total_positions = 1LL * k * k * (k * k - 1) / 2;

        // Cantidad de formas en que se atacan (solo si k >= 3)
        long long attacking_pairs = 0;
        if (k >= 3) {
            attacking_pairs = 4LL * (k - 1) * (k - 2);
        }

        cout << (total_positions - attacking_pairs) << endl;
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