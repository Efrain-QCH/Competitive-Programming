/**
*  Author :    zero_speed
*  Created :   2025-06-30
*  File :      A_Laptops.cpp
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
    for(auto &[x,y]: arr) cin>>x>>y;
    sort(all(arr));
    for(int i=0;i+1<n;i++){
        if(arr[i].second>arr[i+1].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
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