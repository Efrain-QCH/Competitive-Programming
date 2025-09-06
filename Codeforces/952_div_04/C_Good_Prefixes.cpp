/**
*  Author :    zero_speed
*  Created :   2025-06-23
*  File :      C_Good_Prefixes.cpp
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
    vector<int>arr(n);
    for(int& x: arr)cin>>x;
    if(n==1 && arr[0]==0){
        cout<<1<<endl;
        return;
    }

    ll suma=0;
    ll maximo=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        suma+=arr[i];
        if(arr[i]>maximo){
            maximo=arr[i];
        }
        if(suma==2*maximo) ans++;
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