/**
*  Author :    zero_speed
*  Created :   2025-06-20
*  File :      F_Yamakasi.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n,x,s;
    cin>>n>>s>>x;
    vector<ll> arr(n+1);
    vector<ll> pref(n+1);
    map<ll, ll> conta;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref[i]=pref[i-1]+arr[i];
    }

    ll ans=0;
    int l=1;

    for(int i=1;i<=n;i++){
        if(arr[i]>x) conta.clear(), l=i+1;
        else if(arr[i]==x){
            while(l<=i){
                conta[pref[l-1]]++;
                l++;
            }
        }
        ans+=conta[pref[i]-s];
    }

    cout << ans<<endl;

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