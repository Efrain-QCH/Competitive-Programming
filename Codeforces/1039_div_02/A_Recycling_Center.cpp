/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-31                      _/ \_ 
*  File :      A_Recycling_Center.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll& x: arr)cin>>x;
    sort(all(arr));
    int index=upper_bound(all(arr), k)-arr.begin();
    int ans=50;
    for(int i=index;i>=0;i--){
        
        int suma=0;
        ll pote=0;
        for(int j=i;j>=0;j--){
            if(arr[j]*(1<<pote)>k) suma++;
            //cout<<arr[i]*(1<<pote)<<" ";
            pote++;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]*pow(2,pote)>k) suma++;
            pote++;
        }
        //cout<<arr[i]<<" ";
        ans=min(ans, suma);
    }
    cout<<ans<<endl;
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