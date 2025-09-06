/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-13                      _/ \_ 
*  File :      C_Less_or_Equal.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int maxi=0,n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(all(arr));

    if(k==0 && arr[0]>1)
        cout<<"1"<<endl;

    else if(k==0 && arr[0]==1)
        cout<<"-1"<<endl;

    else if(k<=n-1){
        if(arr[k-1]!=arr[k])
            cout<<arr[k-1]<<endl;
        else
            cout<<"-1"<<endl;
    }

    else if(k==n)
        cout<<arr[k-1]<<endl;
}


int main() {
    fastio;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}