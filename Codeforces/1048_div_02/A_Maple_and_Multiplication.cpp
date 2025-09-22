/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-08                      _/ \_ 
*  File :      A_Maple_and_Multiplication.cpp
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
    cin>> a >> b;
    int ans=gcd(a, b);
    if(a==b){
        cout<<0<<endl;
    }else if(ans==a || ans==b){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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