/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-26                      _/ \_ 
*  File :      H_Not_Segment_Tree.cpp
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
    for(int& x: arr) cin>>x;
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        ll ans=0;
        
        for(int i=l-1;i<r;i++){
            ll conta=0;
            for(int j=i;j<r;j++){
                conta+=arr[j];
                if (conta==j-i+1) {
                    ans++;
                } 
            }
            
        }
        //ans += (conta * (conta + 1)) / 2;
        cout<<ans<<endl;
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