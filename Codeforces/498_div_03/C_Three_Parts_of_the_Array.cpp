/**
*  Author :    zero_speed
*  Created :   2025-07-02
*  File :      C_Three_Parts_of_the_Array.cpp
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
    vector<ll> arr(n);
    for(auto& x: arr) cin>>x;
    
    ll r=n-1,l=0;
    ll sumal=0, sumar=0;
    ll ans=0;
    while (l <= r) {
    if (sumal < sumar) {
        sumal += arr[l];
        l++;
    } else {
        sumar += arr[r];
        r--;
    }
    if (sumal == sumar) ans = sumal;
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