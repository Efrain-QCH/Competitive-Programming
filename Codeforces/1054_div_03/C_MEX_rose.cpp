/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-25                      _/ \_ 
*  File :      C_MEX_rose.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n+1, 0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[x]++;
    }
    int ans=0;
    if(k==0){
        cout<<arr[0]<<endl;
        return;
    }
    int conta=0;
    for(int i=0;i<k;i++){
        conta+=(arr[i]==0);
        
    }
    ans=max(conta, arr[k]);
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