/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-31                      _/ \_ 
*  File :      C_Leftmost_Below.cpp
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
    vector<int> arr(n);
    for(int &x: arr) cin>>x;
    int minimo=arr[0];
    for(int i=1;i<n;i++){
        if(abs(arr[i]-minimo)>=minimo){
            cout<<"NO"<<endl;
            return;
        }
        minimo=min(minimo, arr[i]);
    }
    cout<<"YES"<<endl;
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