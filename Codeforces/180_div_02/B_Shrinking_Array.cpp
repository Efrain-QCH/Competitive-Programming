/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      B_Shrinking_Array.cpp
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

    int ans=-1;

    for(int i=0;i<n;i++){
        if(i>0 && abs(arr[i]-arr[i-1])<=1){
            cout<<0<<endl;
            return;
        }
        if(i>1 && min(arr[i-1],arr[i-2])<=arr[i] && arr[i]<=max(arr[i-1],arr[i-2])) ans=1;
        if(i+2<n && min(arr[i+1],arr[i+2])<=arr[i] && arr[i]<=max(arr[i+1],arr[i+2])) ans=1;
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