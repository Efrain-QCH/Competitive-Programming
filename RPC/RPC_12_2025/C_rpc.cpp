/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      C_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
struct pair_hash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return ((size_t)p.first << 32) ^ (size_t)p.second;
    }
};

void solve() {
    int n, m;
    cin>>n>>m;
    unordered_map<pair<int,int>, int, pair_hash> ans;
    for(int i=0;i<m;i++){
        char c;
        cin>>c;
        int x,y;
        cin>>x>>y;
        ans[{x,y}]++;
        if(c=='Q'){
            for(int i=1;i<=n;i++){
                ans[{x,i}]++;
                ans[{i,y}]++;
                if(x-i>0){
                    if(y-i>0){
                        ans[{x-i,y-i}]++;
                    }
                    if(y+i<=n){
                        ans[{x-i,y+i}]++;
                    }
                }
                if(x+i<=n){
                    if(y-i>0){
                        ans[{x+i,y-i}]++;
                    }
                    if(y+i<=n){
                        ans[{x+i,y+i}]++;
                    }
                }
            }
        }
        if(c=='N'){
            if(x+2<=n){
                if(y+1<=n){
                    ans[{x+2,y+1}]++;
                }
                if(y-1>0){
                    ans[{x+2,y-1}]++;
                }
            }
            if(x-2>0){
                if(y+1<=n){
                    ans[{x-2,y+1}]++;
                }
                if(y-1>0){
                    ans[{x-2,y-1}]++;
                }
            }
            if(y+2<=n){
                if(x+1<=n){
                    ans[{x+1,y+2}]++;
                }
                if(x-1>0){
                    ans[{x-1,y+2}]++;
                }
            }
            if(y-2>0){
                if(x+1<=n){
                    ans[{x+1,y-2}]++;
                }
                if(x-1>0){
                    ans[{x-1,y-2}]++;
                }
            }
        }else{
            for(int i=1;i<=n;i++){
                ans[{x,i}]++;
                ans[{i,y}]++;
                
            }
        }
    }
    cout<<ans.size()<<endl;
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