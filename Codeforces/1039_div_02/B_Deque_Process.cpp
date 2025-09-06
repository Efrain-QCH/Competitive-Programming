/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-07-31                      _/ \_ 
*  File :      B_Deque_Process.cpp
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
    int l=0, r=n-1;
    int ok=0;
    while(l<=r){
        ok^=1;
        if(ok){
            if(arr[l]<arr[r]){
                cout<<"L";
                l++;
            }else {
                cout<<"R";
                r--;
            }
        }else{
            if(arr[l]<arr[r]){
                cout<<"R";
                r--;
            }else {
                cout<<"L";
                l++;
            }
        }
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