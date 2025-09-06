/**
*  Author :    zero_speed
*  Created :   2025-06-18
*  File :      A_Letter_Home.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int& y : arr) cin>>y;

    sort(all(arr));

    cout<<arr[n-1]-arr[0]+min(abs(arr[n-1]-x), abs(x-arr[0]))<<endl;

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