/**                                            (⌐■_■)
*  Author :    zero_speed                       /█\   GG...
*  Created :   2025-08-29                      _/ \_ 
*  File :      C_1_Message_Transmission_Error_easy_version.cpp
**/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void solve() {
    string s;
    cin>>s;
    int index=0;
    string ans="";
    for(int i=1;i<(s.size()+1)/2;i++){
        if(s[i]==s[0]){
            bool ok=0;
            for(int j=0;j+i<s.size();j++){
                if(s[j]!=s[i+j]){
                    ok=1;
                    break;
                }
            }
            if(!ok){
                for(int j=0;j+i<s.size();j++){
                    ans+=s[j];
                }
                cout<<"YES"<<endl;
                cout<<ans;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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