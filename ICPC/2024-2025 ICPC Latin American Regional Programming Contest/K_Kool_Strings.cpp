/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-10-27                      _/ \_ 
*  File :      K_Kool_Strings.cpp
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
    string s;
    cin>>n>>s;
    int uno=0, cero=0;
    int ans=0;
    if (n==2){
        int a=0, b=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]!='1') a++;
                else b++;
            }else{
                if(s[i]!='0') a++;
                else b++;
            }
        }
        if(a<b){
            cout<<a<<" ";
            for(int i=0;i<s.size();i++){
                if(i%2==0) cout<<1;
                else cout<<0;
            }
        }else{
            cout<<b<<" ";
            for(int i=0;i<s.size();i++){
                if(i%2==0) cout<<0;
                else cout<<1;
            }
        }
        return ;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cero++;
            uno=0;
        }else{
            uno++;
            cero=0;
        }
        if(uno==n){
            s[i]='0';
            cero++;
            uno=0;
            ans++;
            continue;
        }
        if(cero==n){
            s[i]='1';
            uno++;
            cero=0;
            ans++;
        }

    }
    cout<<ans<<" "<<s<<endl;
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