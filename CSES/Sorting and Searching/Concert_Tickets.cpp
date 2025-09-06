/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-05                      _/ \_ 
*  File :      Concert_Tickets.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n, m;
    cin>>n>>m;
    multiset<int> arr;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        arr.insert(x);
    }
    while(m--){
        int x;
        cin>>x;
        auto it = arr.upper_bound(x);
        if(it == arr.begin()){
            cout<<-1<<endl;
        }else{
            it--;
            cout<<*it<<endl;
            arr.erase(it);
        }
    }
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