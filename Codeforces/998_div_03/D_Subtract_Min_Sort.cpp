/**
*  Author :    zero_speed
*  Created :   2025-07-02
*  File :      D_Subtract_Min_Sort.cpp
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
    for(auto& x: arr)cin>>x;
    int aux=0;
    for(int i=0;i+1<n;i++){
        arr[i]-=aux;
        aux=arr[i];
        if(arr[i]>arr[i+1]) {
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;
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