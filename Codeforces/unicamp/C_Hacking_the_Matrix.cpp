/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-06                      _/ \_ 
*  File :      C_Hacking_the_Matrix.cpp
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
    vector<string> arr(n);
    for(auto& x: arr) cin>>x;
    int conta=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            conta+=(arr[i][j]=='1');
        }
    }
    cout<<(conta+2)/3<<endl;
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