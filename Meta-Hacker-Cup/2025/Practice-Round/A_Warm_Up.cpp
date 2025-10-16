/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-16                      _/ \_ 
*  File :      A_Warm_Up.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve(int t) {
    cout<<"Case #"<<t<<": ";    

    int n;
    cin>>n;
    
    bool ok=0;
    vector<pair<int, pair<int, int>>> items(n);
    map<int, int> pos;
    for(int i=0;i<n;i++){
        cin>>items[i].first;
        pos[items[i].first]=i+1;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        items[i].second={x, i+1};
        if(x<items[i].first) ok=1;
    }
    if(ok){
        cout<<-1<<endl;
        return;
    }
    sort(all(items));
    vector<pair<int, int>> ans;
    for(int i=0;i<n;i++){
        auto [a,x] = items[i];
        auto [b,c] = x;
        if(a!=b){
            if(pos[b]){
                ans.push_back({pos[b], c});
            }else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto [a,b]:ans) cout<<a<<" "<<b<<endl;

    
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++) {
        solve(i);
    }
    return 0;
}