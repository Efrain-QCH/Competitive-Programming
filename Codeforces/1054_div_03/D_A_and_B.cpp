/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-25                      _/ \_ 
*  File :      D_A_and_B.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

ll calcu(string s, char c){
    vector<ll> posi;
    for(ll i=0;i<s.size();i++){
        if(s[i]==c)posi.push_back(i);
    }
    ll medio=posi.size()/2;
    if(posi.size()<=1) return 0;
    ll k=posi.size();
    vector<ll> shifted(k);
    for (int i = 0; i < k; i++) shifted[i] = posi[i] - i;

    sort(shifted.begin(), shifted.end());
    ll median = shifted[k/2];

    ll cost = 0;
    for (int i = 0; i < k; i++) {
        cost += llabs(shifted[i] - median);
    }
    return cost;

}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll a=calcu(s, 'a');
    ll b=calcu(s, 'b');
    reverse(all(s));
    a=min(a, calcu(s, 'a'));
    b=min(b, calcu(s, 'b'));
    cout<<min(a, b)<<endl;
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