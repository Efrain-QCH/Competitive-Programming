/**
*  Author :    zero_speed
*  Created :   2025-07-01
*  File :      C_Prefix_Min_and_Suffix_Max.cpp
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
    vector<int> arr(n),prefix(n+1,INT32_MAX),sufix(n+1,0);
    for(int & x: arr) cin>>x;
    int minimo=INT32_MAX;
    int maximo=0;
    for(int i=1;i<=n;i++){
        prefix[i]=min(prefix[i-1],arr[i-1]);
    }
    for(int i=n;i>0;i--){
        sufix[i-1]=max(sufix[i],arr[i-1]);
    }
    for(int i=0;i<n;i++){
        if(sufix[i]==arr[i] || prefix[i+1]==arr[i]) cout<<1;
        else cout<<0;
    }
    cout<<endl;

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