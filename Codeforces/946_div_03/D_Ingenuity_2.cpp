/**
*  Author :    zero_speed
*  Created :   2025-06-27
*  File :      D_Ingenuity_2.cpp
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
    string s;
    cin >> s;

    int dx = 0, dy = 0;

    for (char c : s) {
        if (c == 'N') dy++;
        else if (c == 'S') dy--;
        else if (c == 'E') dx++;
        else if (c == 'W') dx--;
    }

    if (abs(dx) % 2 != 0 || abs(dy) % 2 != 0) {
        cout << "NO\n";
        return;
    }

    if (dx == 0 && dy == 0) {
        if (n == 2) {
            cout << "NO\n";
            return;
        }

        string ans(n, 'R');
        for (int i = 1; i < n; ++i) {
            if ((s[0] == 'N' && s[i] == 'S') ||
                (s[0] == 'S' && s[i] == 'N') ||
                (s[0] == 'E' && s[i] == 'W') ||
                (s[0] == 'W' && s[i] == 'E')) {
                ans[0] = ans[i] = 'H';
                cout << ans << endl;
                return;
            }
        }
        cout << "NO\n";
        return;
    }

    string ans(n, 'R');
    int rx = 0, ry = 0;
    int hx = 0, hy = 0;

    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if (c == 'N') {
            if (dy > 0) {
                ans[i] = 'H';
                hy++;
                dy -= 2;
            } else {
                ry++;
            }
        } else if (c == 'S') {
            if (dy < 0) {
                ans[i] = 'H';
                hy--;
                dy += 2;
            } else {
                ry--;
            }
        } else if (c == 'E') {
            if (dx > 0) {
                ans[i] = 'H';
                hx++;
                dx -= 2;
            } else {
                rx++;
            }
        } else if (c == 'W') {
            if (dx < 0) {
                ans[i] = 'H';
                hx--;
                dx += 2;
            } else {
                rx--;
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