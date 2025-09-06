/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-03                      _/ \_ 
*  File :      C_LR_remainders.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(n);
    for(ll& x: arr)cin>>x;
    string s;
    cin>>s;
    ll l=0, r=n-1;
    for (auto c: s){
        if(c=='L') l++;
        else r--;
    }
    reverse(all(s));
    ll nume=1;
    ll ans=0;
    vector<ll> salida;
    for(auto c: s){
        ll index;
        if(c=='L'){
            l--;
            index=l;
        } 
        else{
            r++;
            index=r;
        }   
        nume*=arr[index];
        ans=nume%m;
        nume%=m;
        salida.push_back(ans);
    }
    reverse(all(salida));
    for(auto c: salida){
        cout<<c<<" ";
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