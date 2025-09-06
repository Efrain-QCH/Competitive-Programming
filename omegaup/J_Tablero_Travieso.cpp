/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      J_Tablero_Travieso.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

map<char, int> leds = {
    {'0', 6}, 
    {'1', 2}, 
    {'2', 5}, 
    {'3', 5}, 
    {'4', 4},
    {'5', 5}, 
    {'6', 6}, 
    {'7', 3}, 
    {'8', 7}, 
    {'9', 6}
};

void solve() {
    string s;
    cin >> s;

    int suma = 0;
    for (char c : s) {
        suma += leds[c];
    }

    int len = s.size();
    string ans = "";

    for (int i = 0; i < len; ++i) {
        
        for (char j = '9'; j >= '0'; j--) {
            int falta = suma - leds[j];
            int aux = len - i - 1;
            int need = aux * 2;
            int sobra = aux * 7;   
            if (falta >= need && falta <= sobra) {
                ans += j;
                suma -= leds[j];
                break;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}