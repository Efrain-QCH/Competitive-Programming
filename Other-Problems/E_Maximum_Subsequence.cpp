/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-04                      _/ \_ 
*  File :      E_Maximum_Subsequence.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<ll> sumas(vector<ll> nums, ll m){
    vector<ll> res;
    int n=nums.size();
    for(int i=0;i<(1<<n);i++){
        ll suma=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                suma = (suma + nums[j]) % m;
            }
        }
        res.push_back(suma);
    }
    return res;

}

void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll> nums(n);
    for(ll &x: nums) cin>>x;
    int medio=n/2;
    vector<ll> a(nums.begin(), nums.begin()+medio);
    vector<ll> b(nums.begin()+medio, nums.end());

    vector<ll> x=sumas(a, m);
    vector<ll> y=sumas(b, m);
    sort(all(y));


    ll ans=0;
    for(auto uno:x){

        ll need = m-1-uno;
        auto index=upper_bound(all(y), need);

        if(index!=y.begin()){
            index--;
            ans=max(ans, (uno+ *index) % m);
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