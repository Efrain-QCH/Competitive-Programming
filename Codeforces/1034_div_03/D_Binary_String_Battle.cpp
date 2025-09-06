/**
*  Author :    zero_speed
*  Created :   2025-07-01
*  File :      D_Binary_String_Battle.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int uno=count(all(s),'1');
    if(uno<=k || n/2<k){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
    }
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