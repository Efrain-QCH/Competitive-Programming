/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      A_Creating_Words.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    string a,b;
    cin>>a>>b;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
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