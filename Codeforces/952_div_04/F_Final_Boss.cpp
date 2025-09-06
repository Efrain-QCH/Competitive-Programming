/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      F_Final_Boss.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int h,n;
    cin>>h>>n;
    vector<ll> arr1(n), arr2(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    ll ans=-1;
    ll l=1,r=2e12;

    while(l<=r){
        ll medio=l+(r-l)/2;
        ll suma=0;
        for(int i=0;i<n;i++){
            ll aux=(medio+arr2[i]-1)/arr2[i];
            aux*=arr1[i];
            suma+=aux;
            if (suma >= h) break;
        }

        if (suma >= h) {
            ans = medio;
            r = medio - 1; 
        } else {
            l = medio + 1;
        }
         
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