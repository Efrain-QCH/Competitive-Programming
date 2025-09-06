/**
*  Author :    zero_speed
*  Created :   2025-06-18
*  File :      C_Those_Who_Are_With_Us.cpp
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

    int arr[n][m];
    map<int, int> count, add;
    int maximo=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            maximo=max(arr[i][j], maximo);
        }
    }

    int conta=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==maximo){
                count[i]++;
                add[j]++;
                conta++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(count[i]+add[j]-(arr[i][j]==maximo)==conta){
                cout<<maximo-1<<endl;
                return;
            }
        }
    }
    cout<<maximo<<endl;

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