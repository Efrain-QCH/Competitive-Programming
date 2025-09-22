/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-09-13                      _/ \_ 
*  File :      C_Pacer.cpp
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
    int ans=0;
    int index=0;
    int time=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        time=a-time;
        if(b==index){
            if(time%2==0){
                ans+=time;
            }else{
                ans+=time-1;
            }
        }else{
            if(time%2==0){
                ans+=time-1;
                index=b;
            }else{
                ans+=time;
                index=b;
            }
        }
        index=b;
        time=a;
    }
    ans+=(m-time);
    cout<<ans<<endl;
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