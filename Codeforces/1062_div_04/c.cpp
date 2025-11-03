/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-03                      _/ \_ 
*  File :      c.cpp
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
    vector<int> nums(n);
    bool a=0, b=0;
    for(int & x: nums){
        cin>>x;
        if(x%2){
            a=1;
        }else{
            b=1;
        }
    }
    if(a&&b){
        sort(all(nums));
        for(auto x: nums) cout<<x<<" ";
    }else{
        for(auto x: nums) cout<<x<<" ";
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