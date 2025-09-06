/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      E_Emparejando_el_entrenamiento.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=INT_MAX;
    ans=min(ans, abs(abs(a+b)-abs(c+d)));
    ans=min(ans, abs(abs(a+c)-abs(b+d)));
    ans=min(ans, abs(abs(a+d)-abs(c+b)));
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