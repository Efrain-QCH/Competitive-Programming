/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      C_Maximum_Sum.cpp
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
    cin>>n;
    vector<vector<ll>> a(n+1, vector<ll>(n+1)), b(n+1, vector<ll>(n+1));
    ll suma=0, ans=-1e9;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            b[i][j] = a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int x=1;x<=i;x++){
                for(int y=1;y<=j;y++){
                    ll sum = b[i][j]-b[x-1][j]-b[i][y-1]+b[x-1][y-1];
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout<<ans<<endl;
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