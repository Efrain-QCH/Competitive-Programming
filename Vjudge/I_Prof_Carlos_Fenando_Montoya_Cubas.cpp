/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      I_Prof_Carlos_Fenando_Montoya_Cubas.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

ll facto(ll n){
    ll res=1;
    for(ll i=2;i<=n;i++){
        res*=i;
    }
    return res;
}

int digitos(ll n){
    int cnt=0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}   

void solve() {
    for(ll i=1;i<=22;i++){
        cout<<i<<" "<<facto(i)<<" "<<digitos(facto(i))<<endl;
    }
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