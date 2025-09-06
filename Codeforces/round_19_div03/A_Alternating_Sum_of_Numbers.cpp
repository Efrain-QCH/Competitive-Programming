/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-29                      _/ \_ 
*  File :      A_Alternating_Sum_of_Numbers.cpp
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
    ll ans=0;
    vector<ll> arr(n);
    for(ll& x: arr)cin>>x;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans+=arr[i];
            continue;
        }
        ans-=arr[i];

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