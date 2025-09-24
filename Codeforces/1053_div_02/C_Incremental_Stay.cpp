/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-24                      _/ \_ 
*  File :      C_Incremental_Stay.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve(){
    int n;
    cin>>n;
    n *= 2;
    vector<ll> a(n+1),imp(n+1,0), par(n+2,0), sum(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    imp[1] = a[1];
    imp[2]=a[1];
    for(int i=1; i<=n; i++){
        sum[i] = sum[i-1] + a[i];
        if(i%2 == 0) {
            par[i] = par[i-2] + a[i];
            par[i+1]=par[i];
        }
        else if(i > 1){
            imp[i] = imp[i-2] + a[i];
            imp[i+1]=imp[i];
        }
    }
    ll s =0;
    for(int i=1; i<n/2+1; i++){
        if(i== 1){
            s = par[n] - imp[n];
            cout<<s<<" ";
        }else{
            int j = i-1;
            ll I = imp[n-j] - imp[j];
            ll P = par[n-j] - par[j];
            s += abs(I-P);
            s+=sum[n]-sum[n-j]-sum[j];
            cout<<s<<" ";
        }
        s=0;
    }
    cout<<endl;
    
    
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
