/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-11                      _/ \_ 
*  File :      Creating_Strings.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

ll facto(ll n){
    long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

void solve() {
    string s;
    cin>>s;
    sort(all(s));
    ll num=s.size();
    map<char, int> canti;
    for(auto c: s) canti[c]++;
    ll ans=1;
    for(auto [x, y] : canti){
        //cout<<y<<" ";
        ans*=facto(y);
    }
    //ans=(ll)s.size()/ans;
    cout<<facto(num)/ans<<endl;
    do{
        cout<<s<<endl;
    }while (next_permutation(all(s)));
    
    
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