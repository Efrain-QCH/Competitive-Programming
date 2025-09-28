/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-28                      _/ \_ 
*  File :      Mex_Grid_Construction.cpp
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
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            vector<bool> used(n * n, false);
            
            for (int k = 0; k < j; ++k)
                used[grid[i][k]] = true;
            
            for (int k = 0; k < i; ++k)
                used[grid[k][j]] = true;
            
            int mex = 0;
            while (used[mex]) ++mex;
            grid[i][j] = mex;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << (j + 1 == n ? "\n" : " ");
        }
    }
}

int main() {
    fastio;
    solve();
    return 0;
}