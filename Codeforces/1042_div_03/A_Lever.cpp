/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-17                      _/ \_ 
*  File :      A_Lever.cpp
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
    vector<int> arr1(n), arr2(n);
    for(int& x: arr1)cin>>x;
    for(int& x: arr2)cin>>x;
    int ans=1;
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            ans+=arr1[i]-arr2[i];
        }
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