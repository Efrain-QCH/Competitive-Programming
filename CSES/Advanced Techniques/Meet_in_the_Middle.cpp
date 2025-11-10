/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-04                      _/ \_ 
*  File :      Meet_in_the_Middle.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

vector<ll> sumas(vector<ll> nums){

    vector<ll> res;
    int n=nums.size();
    
    for(int i=0;i<(1<<n);i++){
        ll suma=0;  
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                suma+=nums[j];
            }
        }
        res.push_back(suma);
    }

    return res;
    
}

void solve() {
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> nums(n);
    for(ll& c: nums) cin>>c;
    int tama=n/2;
    int tamb=n-tama;
    vector<ll> aux1(nums.begin(), nums.begin()+tama);
    vector<ll> aux2(nums.begin()+tama, nums.end());
    vector<ll> a=sumas(aux1);
    vector<ll> b=sumas(aux2);
    sort(all(b));
    ll ans=0;
    for(auto uno : a){
        auto l=lower_bound(all(b), (x-uno))-b.begin();
        auto r=upper_bound(all(b), (x-uno))-b.begin();
        ans+=(r-l);

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