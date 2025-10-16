/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      E_rpc.cpp
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
    string a, b;
    cin>>a>>b;
    string ans="";
    int conta=0;
    for(int i=0; i<n; i++){
        //conta++;
        if(a[i]==b[i] && a[i]=='.'){
            if(conta==4){
                ans+="v";
            }else{
                ans+="w";
            }
            //i++;
            conta=0;
            continue;
        }
        
        conta++;
    }
    if(conta==4){
        ans+="v";
    }else{
        ans+="w";
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