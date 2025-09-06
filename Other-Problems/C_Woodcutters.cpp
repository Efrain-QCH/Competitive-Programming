/**
*  Author :    zero_speed
*  Created :   2025-06-20
*  File :      C_Woodcutters.cpp
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

    vector<pair<int, int>> arr(n);
    for(auto &[x,y]: arr){cin>>x>>y;}
    
    sort(all(arr));

    ll last = arr[0].first;
    int ans=min(2,n);
    for (int i = 1; i < n - 1; ++i) {
    ll x = arr[i].first;
    ll h = arr[i].second;
    if (x - h > last) {
        ++ans;
        last = x;
    } else if (x + h < arr[i + 1].first) {
        ++ans;
        last = x + h;
    } else {
        last = x;
    }
}

    cout<<ans;

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