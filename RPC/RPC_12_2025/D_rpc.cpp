/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      D_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    string s;
    cin>>s;
    map<char, int>f;

    int conta=0;
    for(auto c: s){
        f[c]++;
    }
    for(auto [x, y] : f){
        if(y%2) conta++;
    }
    if(conta>1){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
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