/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-23                      _/ \_ 
*  File :      L_LED_Matrix.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    bool ans=1;
    while(n--){
        string a, b;
        cin>>a>>b;
        
        bool ok=0;
        bool uno=0;
        
        for(auto c: b){
            if(c=='*'){
                ok=1;
            }
        }
        if(ok){
            for(auto c: a){
                if(c=='-'){
                    uno=1;
                }
            }
        }
        if(!uno){
            ans&=1;
        }else{
            ans&=2;
        }

    }

    if(ans){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
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