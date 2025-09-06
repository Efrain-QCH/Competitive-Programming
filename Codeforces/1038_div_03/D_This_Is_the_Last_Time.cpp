/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-25                      _/ \_ 
*  File :      D_This_Is_the_Last_Time.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, k;cin>>n>>k;
    vector<pair<pair<int, int>, int>> arr(n);
    for(int i=0;i<n;i++){
        int l, r, val;
        cin>>l>>r>>val;
        arr[i]={{l,r},val};
    }
    sort(all(arr));
    int ans=k;
    for(int i=0;i<n;i++){
        if(arr[i].first.first>ans) break;
        ans=max(ans, arr[i].second);
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