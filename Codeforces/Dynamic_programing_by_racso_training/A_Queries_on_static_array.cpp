/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-13                      _/ \_ 
*  File :      A_Queries_on_static_array.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,q;
    cin>>n>>q;
    vector<ll> arr(n+1), ans(n+1,0);
    for(int i=0;i<n;i++){
        cin>>arr[i+1];
        ans[i+1] = ans[i] + arr[i+1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<ans[r]-ans[l]<<endl;
    }
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