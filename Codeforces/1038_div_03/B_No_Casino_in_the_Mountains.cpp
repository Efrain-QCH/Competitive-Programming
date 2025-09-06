/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-25                      _/ \_ 
*  File :      B_No_Casino_in_the_Mountains.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,k;
    cin>>n>>k;
    int ans=0, aux=0;
    vector<int> arr(n);
    for(int& x: arr)cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==1) aux=0;
        else aux++;
        if(aux==k){
            ans++;
            aux=0;
            i++;
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