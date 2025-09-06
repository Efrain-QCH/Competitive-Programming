/**
*  Author :    zero_speed
*  Created :   2025-06-18
*  File :      D_1709.cpp
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
    vector<int>arr1(n), arr2(n);
    vector<pair<int, int>> ans;

    for(int& x: arr1) cin>>x;
    for(int& x: arr2) cin>>x;

    for(int i=0;i<n;i++){
        for(int j=0;j+1<n;j++){
            if(arr1[j]>arr1[j+1]){
                swap(arr1[j], arr1[j+1]);
                ans.push_back({1,j+1});
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j+1<n;j++){
            if(arr2[j]>arr2[j+1]){
                swap(arr2[j], arr2[j+1]);
                ans.push_back({2,j+1});
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            ans.push_back({3,i+1});
        }
    }

    cout<<ans.size()<<endl;
    for(auto [x,y] : ans){
        cout<<x<<" "<<y<<endl;
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