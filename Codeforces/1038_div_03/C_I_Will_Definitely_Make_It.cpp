/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-25                      _/ \_ 
*  File :      C_I_Will_Definitely_Make_It.cpp
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
    vector<int>arr(n);
    for(int& x: arr)cin>>x;
    int aux=arr[k-1];
    sort(all(arr));
    ll tiempo=0;
    int index=lower_bound(all(arr), aux) - arr.begin();

    for(int i=index;i+1<n;i++){
        tiempo+=arr[i+1]-arr[i];
        if(tiempo>arr[i]){
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