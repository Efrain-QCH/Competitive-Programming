/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      J_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll> a(m+1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        while(x--){
            int l, r;
            cin>>l>>r;
            a[l]++;
            a[r+1]--;
        }
    }
    for(int i=1; i<=m; i++){
        a[i]+=a[i-1];
        //cout<<a[i]<<" ";
    }
    int ans=0;
    for(int i=1; i<=m; i++){
        if(n-a[i]>=3) ans++;
        //cout<<n-a[i]<<" ";
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