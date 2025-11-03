/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-17                      _/ \_ 
*  File :      B_Prof_Edwin_Carrasco_Poblete.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    
}

int main() {
    fastio;
    ll n;
    while(cin>>n){
        ll m;
        cin>>m;
        ll ans=0;
        for(ll i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            ans+=x*y;
        }
        cout<<ans/n<<endl;
    }
    return 0;
}