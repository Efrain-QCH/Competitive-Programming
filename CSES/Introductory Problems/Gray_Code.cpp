/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-10                      _/ \_ 
*  File :      Gray_Code.cpp
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
    int total = 1 << n; 

    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1); 

        
        for (int j = n - 1; j >= 0; --j) {
            cout << ((gray >> j) & 1);
        }
        cout << '\n';
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