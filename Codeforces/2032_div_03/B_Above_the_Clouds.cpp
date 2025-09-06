/**
*  Author :    zero_speed
*  Created :   2025-06-18
*  File :      B_Above_the_Clouds.cpp
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
    string s;
    cin>>s;
    set<char> arr;
    arr.insert(s[0]);
    arr.insert(s[n-1]);
    for(int i=1;i+1<n;i++){
        char x=s[i];
        if(arr.count(x)){
            cout<<"Yes"<<endl;
            return;
        }
        arr.insert(x);
    }
    cout<<"No"<<endl;
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