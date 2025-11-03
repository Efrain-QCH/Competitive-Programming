/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-03                      _/ \_ 
*  File :      d.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool divi(vector<ll> arr, ll n){
    for(auto x: arr){
        if(x%n!=0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(ll& x: arr)cin>>x;
    
    ll ans=2;

    while(!(isPrime(ans) && !divi(arr, ans))){
        ans++;
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