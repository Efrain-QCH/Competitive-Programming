/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-05                      _/ \_ 
*  File :      Apartments.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(all(a));
    sort(all(b));
    int index=0;
    int ans=0;
    for(int i=0;i<n;i++){
        for(;index<m;index++){
            if(a[i]+k<b[index]){
                break;
            }
            if(a[i]+k>=b[index] && a[i]-k<=b[index]){
                index++;
                ans++;
                break;
            }

        }
    }
    cout<<ans<<endl;
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