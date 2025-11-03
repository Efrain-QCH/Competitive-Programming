/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-23                      _/ \_ 
*  File :      K_KMOP.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void valor(char x, int &a){
    if(x == 'A' || x == 'E' || x == 'I' || 
        x == 'O' || x == 'U' || x == 'Y') a = 0;
    else a++;
}

void com(int &a){
    if(a > 2) a = -1;
}

void solve() {
    int n; cin >> n;
    vector<string> a(n + 1, "0");
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    vector<vector<int>> ans(n + 1, vector<int>(3, 0));
    vector<vector<bool>> st(n, vector<bool>(3, true));

    int INF = 1e9;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < min((int)a[i].size(), 3); j++){
            int aux = INF, aux2 = 0;
            if(st[i-1][0]){
                valor(a[i][j], dp[i][j])
            }  
            if(st[i-1][1])
            if(st[i-1][2])
        }
    }
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