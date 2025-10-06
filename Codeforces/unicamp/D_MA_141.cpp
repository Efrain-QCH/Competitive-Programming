/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-06                      _/ \_ 
*  File :      D_MA_141.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

ll int pote(ll a, ll b){
    return (a-b)*(a-b);
}

void solve() {
    ll int x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if((pote(x1, x2)+pote(y1,y2))==(pote(x2, x3)+pote(y2,y3)) && 
        (pote(x2, x3)+pote(y2,y3))==(pote(x3, x4)+pote(y3,y4)) && 
        (pote(x3, x4)+pote(y3,y4))==(pote(x4, x1)+pote(y4,y1)) &&
        (pote(x1, x3)+pote(y1,y3))==(pote(x2, x4)+pote(y2,y4))
    ){
        cout<<"SIM"<<endl;
    }else{
        cout<<"NAO"<<endl;
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