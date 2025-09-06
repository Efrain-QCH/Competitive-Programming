/**
*  Author :    zero_speed
*  Created :   2025-06-27
*  File :      C_Beautiful_Triple_Pairs.cpp
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
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    map<tuple<int, int, int>, int> cnt;
    ll ans = 0;

    for (int i = 0; i < n - 2; ++i) {
        int x = a[i], y = a[i + 1], z = a[i + 2];
        tuple<int, int, int> full = {x, y, z};

        vector<tuple<int, int, int>> mist = {
            {0, y, z},
            {x, 0, z},
            {x, y, 0}
        };

        for (auto& trip : mist) {
            ans += cnt[trip] - cnt[full];
            cnt[trip]++;
        }
        cnt[full]++;
    }

    cout << ans << "\n";
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