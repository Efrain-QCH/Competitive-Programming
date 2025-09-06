/**
*  Author :    zero_speed
*  Created :   2025-06-20
*  File :      C_Number_of_Ways.cpp
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
    vector<ll>arr(n+1), pre(n+1), prer(n+1);
    ll ans=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
    if(pre[n]%3!=0){
        cout<<0<<endl;
        return;
    }

    vector<int> l(n+1);

    ll conta=0;
    for(int i=1;i<=n;i++){
        if(pre[i]==pre[n]/3){
            conta++;
        }
        l[i]=conta;
    }
    ll suma=0;
    for(int i=n;i>1;i--){
        suma+=arr[i];
        if(suma==pre[n]/3){
        
            ans+=(l[i-2]);
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