/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-13                      _/ \_ 
*  File :      D_Destruction_of_the_Dandelion_Fields.cpp
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
    vector<ll> par, impar;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0)par.push_back(x);
        else impar.push_back(x);
    }
    
    sort(allr(impar));
    int tam=impar.size();
    for(int i=0;i<(tam+1)/2;i++){
        ans+=impar[i];
    }
    if(impar.size()!=0){
        for(auto x:par)ans+=x;
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