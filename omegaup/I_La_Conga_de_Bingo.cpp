/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      I_La_Conga_de_Bingo.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

struct perro {
    int a, e, c;
};

void solve() {
    int n;
    cin >> n;
    vector<perro> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].a >> arr[i].e >> arr[i].c;
    }

    sort(arr.begin(), arr.end(), [](const perro &x, const perro &y) {
        if (x.a != y.a) return x.a < y.a;
        if (x.e != y.e) return x.e < y.e;
        return x.c < y.c;
    });

    vector<int> dp(n, 1);
    int ans = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[j].a < arr[i].a && arr[j].e < arr[i].e && arr[j].c < arr[i].c) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << "\n";

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