/**
*  Author :    zero_speed
*  Created :   2025-06-30
*  File :      A_Array_Divisibility.cpp
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
    vector<ll> arr(n+1,1);
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
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