/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      A_Race.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int a,x,y;
    cin>>a>>x>>y;
    for(int i=1;i<=100;i++){
        if(i==a) continue;
        if(abs(i-x)<abs(a-x) && abs(i-y)<abs(a-y)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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