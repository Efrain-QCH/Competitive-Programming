/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-11-10                      _/ \_ 
*  File :      A_Souvlaki_VS_Kalamaki.cpp
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
    for(int & x: nums)cin>>x;
    sort(all(nums));
    bool ok=0;
    for(int i=1;i+1<n;i+=2){
        if(nums[i]!=nums[i+1]){
            ok=1;
        }
    }

    if(!ok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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