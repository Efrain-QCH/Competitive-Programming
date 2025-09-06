/**
*  Author :    zero_speed
*  Created :   2025-07-01
*  File :      B_Tournament.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,j,k;
    cin>>n>>j>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=arr[j-1];
    sort(all(arr));
    if(k>=2) cout<<"YES"<<endl;
    else if(k==1 && index==arr[n-1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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