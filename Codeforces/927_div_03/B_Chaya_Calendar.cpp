/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-03                      _/ \_ 
*  File :      B_Chaya_Calendar.cpp
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
    for(int& x: arr)cin>>x;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            arr[i]=((arr[i-1]/arr[i])+1)*arr[i];
            //cout<<arr[i]<<" ";
        }
    }
    cout<<arr[n-1]<<endl;
    
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