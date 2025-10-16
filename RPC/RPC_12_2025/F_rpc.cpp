/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      K_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

int f(vector<string> &a, int p1, int p2, int n, int m){
    int k = 1;
    //cout << p1+k;
    while(p1+k<n && p2+k<m && p1-k>=0 && p2-k>=0){
    	//cout << 2;
        if(a[p1][p2+k] != (char)45) break;
        //cout << 1;
        if(a[p1][p2-k] != (char)45) break;
        //cout << 1;
        if(a[p1-k][p2] != (char)124) break;
        //cout << 1;
        if(a[p1+k][p2] != (char)124) break;
        //cout << 1;
        if(a[p1-k][p2-k] != (char)92) break;
        //cout << 1;
        if(a[p1+k][p2+k] != (char)92) break;
        //cout << 1;
        if(a[p1-k][p2+k] != (char)47) break;
        //cout << 1;
        if(a[p1+k][p2-k] != (char)47) break;
        //cout << 1;
        k++;
    }
    return k-1;
}
void solve() {
    int n, m; cin>>n>>m;
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '+'){
            	ans = max(ans, f(a, i, j, n, m));
            }
        }
    }
    cout << ans << endl;
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