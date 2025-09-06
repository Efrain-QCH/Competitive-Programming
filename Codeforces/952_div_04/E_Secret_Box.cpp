/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      E_Secret_Box.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()



void solve() {
    int64_t x, y, z, k; 
    cin >> x >> y >> z >> k;
    int64_t ans = 0ll;
    for(int64_t i = 1; i <= x; ++i){
        for(int64_t j = 1; j <= y; ++j){
            if(k % (i * j) == 0){
                int64_t rest = k / (i * j);
                if(rest <= z){
                    ans = max(ans, (x - i + 1) * (y - j + 1) * (z - rest + 1));
                }
            }
        }
    }
    cout << ans << endl;
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