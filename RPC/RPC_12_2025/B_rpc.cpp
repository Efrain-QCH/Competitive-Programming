/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      B_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    long long n;
    cin>>n;
    long long  ai, bi;
    cin>>ai>>bi;
    long long af, bf;
    cin>>af>>bf;
    double uno = max(0.0, (double)(ai - af*n));
    double dos = max(0.0, (double)(bi - bf*n));

    cout<<fixed<<setprecision(13)<<(uno/(uno+dos))*100<<endl;
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