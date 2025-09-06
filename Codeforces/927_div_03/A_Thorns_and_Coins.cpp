/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-03                      _/ \_ 
*  File :      A_Thorns_and_Coins.cpp
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
    string s;
    cin>>s;
    int ans=0;
    int pas=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*') pas++;
        else pas=0;
        if(pas>1) break;
        ans+=(s[i]=='@');
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