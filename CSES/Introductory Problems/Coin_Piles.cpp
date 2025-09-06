/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-08                      _/ \_ 
*  File :      Coin_Piles.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int a,b;
    cin>>a>>b;
    if((a+b)%3==0 && max(a,b)<=2*min(a,b)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

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

/*

12
21
12

*/