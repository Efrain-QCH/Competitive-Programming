/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      C_Coloring_Game.cpp
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
    vector<int>arr(n);
    for(int& x: arr)cin>>x;    
    ll ans=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            auto it = lower_bound(arr.begin()+j+1, arr.end(),arr[i]+arr[j]);
            int end=it-(arr.begin()+j+1);
            if(end==0) continue;
            it=upper_bound(arr.begin()+j+i, arr.begin()+j+end+1, arr[n-1]-arr[i]-arr[j]);
            ans+=(arr.begin()+j+end+1)-it;
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