/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-11                      _/ \_ 
*  File :      H_rpc.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()


void solve() {
    string a,b,c;
    cin>>a>>b>>c;
    int canti=(a.size() + b.size()+ c.size())/2;
    int x=0, y=0, z=0;
    string ans="";
    while(x<a.size() || y<b.size() || z<c.size()){
        if(x<a.size() && y<b.size()){
            if(a[x]==b[y]){
                ans+="3";
                x++;
                y++;
                continue;
            }
        }
        if(y<b.size() && z<c.size()){
            if(b[y]==c[z]){
                ans+="1";
                y++;
                z++;
                continue;
            }
        }
        if(x<a.size() && z<c.size()){
            if(a[x]==c[z]){
                ans+="2";
                x++;
                z++;
                continue;
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