/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-24                      _/ \_ 
*  File :      A_Incremental_Subarray.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,m;
    cin>>n>>m;
    int aux=0;
    bool ok=0;
    int maximo=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        maximo=max(maximo,x);
        if(i>0){
            if(aux>=x){
                ok=1;
            }
        }
        aux=x;
    }
    if(ok){
        cout<<1<<endl;
    }else{
        cout<<n-maximo+1<<endl;
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