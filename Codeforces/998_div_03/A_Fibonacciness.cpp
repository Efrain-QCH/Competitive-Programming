/**
*  Author :    zero_speed
*  Created :   2025-07-02
*  File :      A_Fibonacciness.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int a, b, d, e;
    cin >> a >> b >> d >> e;

    int ans = 0;
    vector<int> possible_c = {a + b,d - b,e - d};

    for (int c : possible_c) {
        int count = 0;
        if (c == a + b) count++;
        if (d == b + c) count++;
        if (e == c + d) count++;
        ans = max(ans, count);
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