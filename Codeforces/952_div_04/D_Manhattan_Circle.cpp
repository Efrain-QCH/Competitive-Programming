/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      D_Manhattan_Circle.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string> arr(n);
    for(auto& x: arr)cin>>x;
    int cont=0;
    int x,y;
    for(int i=0;i<n;i++){
        if(count(arr[i].begin(), arr[i].end(), '#')>cont){
            cont=count(arr[i].begin(), arr[i].end(), '#');
            x=i;
        }
    }

    for(int i=0;i<m;i++){
        if(arr[x][i]=='#'){
            cout<<x+1<<" "<<i+1+cont/2<<endl;
            return;
        }
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